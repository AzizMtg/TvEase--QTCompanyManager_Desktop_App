/****************************************************************************
** Meta object code from reading C++ file 'travailler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TvEase/travailler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'travailler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_travailler_t {
    QByteArrayData data[11];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_travailler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_travailler_t qt_meta_stringdata_travailler = {
    {
QT_MOC_LITERAL(0, 0, 10), // "travailler"
QT_MOC_LITERAL(1, 11, 39), // "on_pushButton_afficher_jointu..."
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 35), // "on_pushButton_supp_jointure_c..."
QT_MOC_LITERAL(4, 88, 39), // "on_pushButton_modifier_jointu..."
QT_MOC_LITERAL(5, 128, 46), // "on_pushButton__telechargement..."
QT_MOC_LITERAL(6, 175, 37), // "on_pushButton_recher_jointure..."
QT_MOC_LITERAL(7, 213, 26), // "afficherTousElementsSiVide"
QT_MOC_LITERAL(8, 240, 4), // "text"
QT_MOC_LITERAL(9, 245, 35), // "on_comboBox_trie_jointure_act..."
QT_MOC_LITERAL(10, 281, 4) // "arg1"

    },
    "travailler\0on_pushButton_afficher_jointure_clicked\0"
    "\0on_pushButton_supp_jointure_clicked\0"
    "on_pushButton_modifier_jointure_clicked\0"
    "on_pushButton__telechargement_jointure_clicked\0"
    "on_pushButton_recher_jointure_clicked\0"
    "afficherTousElementsSiVide\0text\0"
    "on_comboBox_trie_jointure_activated\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_travailler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void travailler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        travailler *_t = static_cast<travailler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_afficher_jointure_clicked(); break;
        case 1: _t->on_pushButton_supp_jointure_clicked(); break;
        case 2: _t->on_pushButton_modifier_jointure_clicked(); break;
        case 3: _t->on_pushButton__telechargement_jointure_clicked(); break;
        case 4: _t->on_pushButton_recher_jointure_clicked(); break;
        case 5: _t->afficherTousElementsSiVide((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_comboBox_trie_jointure_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject travailler::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_travailler.data,
      qt_meta_data_travailler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *travailler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *travailler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_travailler.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int travailler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
