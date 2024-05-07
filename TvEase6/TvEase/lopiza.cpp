#include "lopiza.h"
#include "ui_lopiza.h"

Lopiza::Lopiza(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Lopiza)
{
    ui->setupUi(this);
    msgr = new Messenger(this);
    DialogNickName *dlgName = new DialogNickName(this);
    connect(dlgName, SIGNAL(setName(QString)), this, SLOT(onSetName(QString)));
    connect(msgr, SIGNAL(peersUpdated()), this , SLOT(onUpdateList()));
    connect(msgr, SIGNAL(roomListUpdated(QString,QString)), this, SLOT(onRoomListUpdated(QString,QString)));
    connect(msgr, SIGNAL(receivedPM(QString,QString)), this, SLOT(onReceivedPM(QString,QString)));
    connect(msgr, SIGNAL(receivedRoom(QString,QString,QString)), this, SLOT(onReceivedRoom(QString,QString,QString)));
    dlgName->setModal(true);
    dlgName->setWindowTitle("Your Nickname, Please");
    dlgName->show();
}

Lopiza::~Lopiza()
{
    delete ui;
}

void Lopiza::onSetName(QString name)
{
    msgr->setName(name);
    ui->lblWelcome->setText("Welcome " + msgr->Name());
    msgr->start();
}

void Lopiza::onUpdateList()
{
    ui->listUsers->clear();
    QList<Peer>& peers = msgr->getPeers();
    for(int i=0; i<peers.count(); i++)
        ui->listUsers->addItem(peers[i].ID());
}

void Lopiza::onRoomListUpdated(QString room, QString msg)
{
    QList<QString> ids;
    QList<Peer>& peers = msgr->getRoomPeers(room);
    for(int i=0; i<peers.count(); i++)
        ids.append(peers[i].ID());
    makeRoomWindow(room)->updateList(ids);
    makeRoomWindow(room)->receivedPM("", msg);
}

void Lopiza::on_listUsers_doubleClicked(const QModelIndex &index)
{
    QString userid = ui->listUsers->currentItem()->text();
    makePMWindow(userid);
}

PMWindow* Lopiza::makePMWindow(QString title)
{
    if(pms.keys().contains(title))
    {
        pms[title]->setFocus();
        return pms[title];
    }
    else
    {
        PMWindow* newpm = new PMWindow();
        pms.insert(title, newpm);
        pmr.insert(newpm, title);
        connect(newpm, SIGNAL(enteredText(QString)), this, SLOT(onPMSend(QString)));
        connect(newpm, SIGNAL(closedWindow()), this, SLOT(onPMClosed()));
        newpm->setWindowTitle(title);
        newpm->show();
        return newpm;
    }
}

RoomWindow* Lopiza::makeRoomWindow(QString title)
{
    if(rms.keys().contains(title))
    {
        rms[title]->setFocus();
        return rms[title];
    }
    else
    {
        RoomWindow* newrm = new RoomWindow();
        rms.insert(title, newrm);
        rmr.insert(newrm, title);
        connect(newrm, SIGNAL(enteredText(QString)), this, SLOT(onRoomSend(QString)));
        connect(newrm, SIGNAL(closedWindow()), this, SLOT(onRoomClosed()));
        connect(newrm, SIGNAL(startPM(QString)), this, SLOT(onRoomPM(QString)));
        newrm->setWindowTitle(title);
        newrm->show();
        return newrm;
    }
}

void Lopiza::onRoomPM(QString id)
{
    makePMWindow(id);
}

void Lopiza::onPMSend(QString text)
{
    PMWindow* to = qobject_cast<PMWindow*>(sender());
    msgr->sendPM(text, pmr[to]);
}

void Lopiza::onRoomSend(QString text)
{
    RoomWindow* room = qobject_cast<RoomWindow*>(sender());
    msgr->sendRoom(text, rmr[room]);
}

void Lopiza::onRoomClosed()
{
    RoomWindow* window = qobject_cast<RoomWindow*>(sender());
    msgr->leaveRoom(rmr[window]);
    rms.remove(rmr[window]);
    rmr.remove(window);
}

void Lopiza::onPMClosed()
{
    PMWindow* window = qobject_cast<PMWindow*>(sender());
    pms.remove(pmr[window]);
    pmr.remove(window);
}

void Lopiza::onReceivedPM(QString from, QString text)
{
    makePMWindow(from)->receivedPM(text);
}

void Lopiza::onReceivedRoom(QString room, QString from, QString text)
{
    makeRoomWindow(room)->receivedPM(from, text);
}

void Lopiza::onMenu(QAction *action)
{
    if(action->text()=="Join")
    {
        DialogRoom* joinroom = new DialogRoom(this);
        connect(joinroom, SIGNAL(joinRoom(QString)), this, SLOT(onJoinRoom(QString)));
        joinroom->setModal(true);
        joinroom->setWindowTitle("Room Name");
        joinroom->show();
    }
    if(action->text()=="About")
    {
        DialogAbout* about = new DialogAbout(this);
        about->setModal(true);
        about->setWindowTitle("About 288 L.M.");
        about->show();
    }
}

void Lopiza::onJoinRoom(QString room)
{
    makeRoomWindow(room)->setFocus();
    msgr->joinRoom(room);
}
