/****************************************************************************
** Meta object code from reading C++ file 'edituser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../topLect/edituser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edituser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_editUser_t {
    QByteArrayData data[9];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_editUser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_editUser_t qt_meta_stringdata_editUser = {
    {
QT_MOC_LITERAL(0, 0, 8), // "editUser"
QT_MOC_LITERAL(1, 9, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "fromUserToEdit"
QT_MOC_LITERAL(4, 49, 4), // "User"
QT_MOC_LITERAL(5, 54, 4), // "user"
QT_MOC_LITERAL(6, 59, 14), // "SQLiteStorage*"
QT_MOC_LITERAL(7, 74, 7), // "storage"
QT_MOC_LITERAL(8, 82, 21) // "on_pushButton_clicked"

    },
    "editUser\0on_pushButton_2_clicked\0\0"
    "fromUserToEdit\0User\0user\0SQLiteStorage*\0"
    "storage\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_editUser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    2,   30,    2, 0x08 /* Private */,
       8,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void,

       0        // eod
};

void editUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        editUser *_t = static_cast<editUser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->fromUserToEdit((*reinterpret_cast< User(*)>(_a[1])),(*reinterpret_cast< SQLiteStorage*(*)>(_a[2]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject editUser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_editUser.data,
      qt_meta_data_editUser,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *editUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *editUser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_editUser.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int editUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
