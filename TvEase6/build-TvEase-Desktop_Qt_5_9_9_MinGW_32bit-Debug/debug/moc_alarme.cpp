/****************************************************************************
** Meta object code from reading C++ file 'alarme.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TvEase/alarme.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alarme.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_alarme_t {
    QByteArrayData data[19];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_alarme_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_alarme_t qt_meta_stringdata_alarme = {
    {
QT_MOC_LITERAL(0, 0, 6), // "alarme"
QT_MOC_LITERAL(1, 7, 10), // "checkAlarm"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 14), // "playAlarmSound"
QT_MOC_LITERAL(4, 34, 11), // "handleError"
QT_MOC_LITERAL(5, 46, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(6, 66, 5), // "error"
QT_MOC_LITERAL(7, 72, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(8, 97, 4), // "arg1"
QT_MOC_LITERAL(9, 102, 10), // "updateTime"
QT_MOC_LITERAL(10, 113, 26), // "on_checkBox_2_stateChanged"
QT_MOC_LITERAL(11, 140, 26), // "on_checkBox_3_stateChanged"
QT_MOC_LITERAL(12, 167, 26), // "on_checkBox_4_stateChanged"
QT_MOC_LITERAL(13, 194, 26), // "on_checkBox_5_stateChanged"
QT_MOC_LITERAL(14, 221, 26), // "on_checkBox_6_stateChanged"
QT_MOC_LITERAL(15, 248, 26), // "on_checkBox_7_stateChanged"
QT_MOC_LITERAL(16, 275, 26), // "on_checkBox_8_stateChanged"
QT_MOC_LITERAL(17, 302, 26), // "on_checkBox_9_stateChanged"
QT_MOC_LITERAL(18, 329, 21) // "on_pushButton_clicked"

    },
    "alarme\0checkAlarm\0\0playAlarmSound\0"
    "handleError\0QMediaPlayer::Error\0error\0"
    "on_checkBox_stateChanged\0arg1\0updateTime\0"
    "on_checkBox_2_stateChanged\0"
    "on_checkBox_3_stateChanged\0"
    "on_checkBox_4_stateChanged\0"
    "on_checkBox_5_stateChanged\0"
    "on_checkBox_6_stateChanged\0"
    "on_checkBox_7_stateChanged\0"
    "on_checkBox_8_stateChanged\0"
    "on_checkBox_9_stateChanged\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_alarme[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    1,   86,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      11,    1,   96,    2, 0x08 /* Private */,
      12,    1,   99,    2, 0x08 /* Private */,
      13,    1,  102,    2, 0x08 /* Private */,
      14,    1,  105,    2, 0x08 /* Private */,
      15,    1,  108,    2, 0x08 /* Private */,
      16,    1,  111,    2, 0x08 /* Private */,
      17,    1,  114,    2, 0x08 /* Private */,
      18,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void alarme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        alarme *_t = static_cast<alarme *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkAlarm(); break;
        case 1: _t->playAlarmSound(); break;
        case 2: _t->handleError((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        case 3: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateTime(); break;
        case 5: _t->on_checkBox_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_checkBox_3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_checkBox_4_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_checkBox_5_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_checkBox_6_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_checkBox_7_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_checkBox_8_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_checkBox_9_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        }
    }
}

const QMetaObject alarme::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_alarme.data,
      qt_meta_data_alarme,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *alarme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *alarme::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_alarme.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int alarme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
