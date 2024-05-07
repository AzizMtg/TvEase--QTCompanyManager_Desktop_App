/****************************************************************************
** Meta object code from reading C++ file 'roomwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TvEase/roomwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roomwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoomWindow_t {
    QByteArrayData data[14];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoomWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoomWindow_t qt_meta_stringdata_RoomWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RoomWindow"
QT_MOC_LITERAL(1, 11, 11), // "enteredText"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "text"
QT_MOC_LITERAL(4, 29, 12), // "closedWindow"
QT_MOC_LITERAL(5, 42, 7), // "roomAdd"
QT_MOC_LITERAL(6, 50, 7), // "startPM"
QT_MOC_LITERAL(7, 58, 2), // "id"
QT_MOC_LITERAL(8, 61, 10), // "receivedPM"
QT_MOC_LITERAL(9, 72, 4), // "from"
QT_MOC_LITERAL(10, 77, 18), // "on_btnSend_clicked"
QT_MOC_LITERAL(11, 96, 25), // "on_txtInput_returnPressed"
QT_MOC_LITERAL(12, 122, 26), // "on_listUsers_doubleClicked"
QT_MOC_LITERAL(13, 149, 5) // "index"

    },
    "RoomWindow\0enteredText\0\0text\0closedWindow\0"
    "roomAdd\0startPM\0id\0receivedPM\0from\0"
    "on_btnSend_clicked\0on_txtInput_returnPressed\0"
    "on_listUsers_doubleClicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   62,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   13,

       0        // eod
};

void RoomWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoomWindow *_t = static_cast<RoomWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enteredText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->closedWindow(); break;
        case 2: _t->roomAdd(); break;
        case 3: _t->startPM((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->receivedPM((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->on_btnSend_clicked(); break;
        case 6: _t->on_txtInput_returnPressed(); break;
        case 7: _t->on_listUsers_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RoomWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomWindow::enteredText)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RoomWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomWindow::closedWindow)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RoomWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomWindow::roomAdd)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (RoomWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomWindow::startPM)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject RoomWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RoomWindow.data,
      qt_meta_data_RoomWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RoomWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoomWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int RoomWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void RoomWindow::enteredText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RoomWindow::closedWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RoomWindow::roomAdd()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void RoomWindow::startPM(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
