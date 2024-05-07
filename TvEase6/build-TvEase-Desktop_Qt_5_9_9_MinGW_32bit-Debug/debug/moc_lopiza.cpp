/****************************************************************************
** Meta object code from reading C++ file 'lopiza.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TvEase/lopiza.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lopiza.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Lopiza_t {
    QByteArrayData data[24];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lopiza_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lopiza_t qt_meta_stringdata_Lopiza = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Lopiza"
QT_MOC_LITERAL(1, 7, 9), // "onSetName"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "name"
QT_MOC_LITERAL(4, 23, 12), // "onUpdateList"
QT_MOC_LITERAL(5, 36, 17), // "onRoomListUpdated"
QT_MOC_LITERAL(6, 54, 4), // "room"
QT_MOC_LITERAL(7, 59, 3), // "msg"
QT_MOC_LITERAL(8, 63, 8), // "onPMSend"
QT_MOC_LITERAL(9, 72, 4), // "text"
QT_MOC_LITERAL(10, 77, 10), // "onPMClosed"
QT_MOC_LITERAL(11, 88, 10), // "onRoomSend"
QT_MOC_LITERAL(12, 99, 12), // "onRoomClosed"
QT_MOC_LITERAL(13, 112, 8), // "onRoomPM"
QT_MOC_LITERAL(14, 121, 2), // "id"
QT_MOC_LITERAL(15, 124, 26), // "on_listUsers_doubleClicked"
QT_MOC_LITERAL(16, 151, 5), // "index"
QT_MOC_LITERAL(17, 157, 12), // "onReceivedPM"
QT_MOC_LITERAL(18, 170, 4), // "from"
QT_MOC_LITERAL(19, 175, 14), // "onReceivedRoom"
QT_MOC_LITERAL(20, 190, 10), // "onJoinRoom"
QT_MOC_LITERAL(21, 201, 6), // "onMenu"
QT_MOC_LITERAL(22, 208, 8), // "QAction*"
QT_MOC_LITERAL(23, 217, 6) // "action"

    },
    "Lopiza\0onSetName\0\0name\0onUpdateList\0"
    "onRoomListUpdated\0room\0msg\0onPMSend\0"
    "text\0onPMClosed\0onRoomSend\0onRoomClosed\0"
    "onRoomPM\0id\0on_listUsers_doubleClicked\0"
    "index\0onReceivedPM\0from\0onReceivedRoom\0"
    "onJoinRoom\0onMenu\0QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lopiza[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    0,   82,    2, 0x08 /* Private */,
       5,    2,   83,    2, 0x08 /* Private */,
       8,    1,   88,    2, 0x08 /* Private */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    1,   92,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,
      17,    2,  102,    2, 0x08 /* Private */,
      19,    3,  107,    2, 0x08 /* Private */,
      20,    1,  114,    2, 0x08 /* Private */,
      21,    1,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QModelIndex,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,   18,    9,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void Lopiza::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Lopiza *_t = static_cast<Lopiza *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSetName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onUpdateList(); break;
        case 2: _t->onRoomListUpdated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->onPMSend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->onPMClosed(); break;
        case 5: _t->onRoomSend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onRoomClosed(); break;
        case 7: _t->onRoomPM((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->on_listUsers_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->onReceivedPM((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->onReceivedRoom((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->onJoinRoom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->onMenu((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Lopiza::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Lopiza.data,
      qt_meta_data_Lopiza,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Lopiza::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lopiza::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Lopiza.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Lopiza::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
