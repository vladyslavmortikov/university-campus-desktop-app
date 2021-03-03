/****************************************************************************
** Meta object code from reading C++ file 'userwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../topLect/userwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserWindow_t {
    QByteArrayData data[14];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserWindow_t qt_meta_stringdata_UserWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UserWindow"
QT_MOC_LITERAL(1, 11, 2), // "ex"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 11), // "editUserNow"
QT_MOC_LITERAL(4, 27, 4), // "User"
QT_MOC_LITERAL(5, 32, 4), // "user"
QT_MOC_LITERAL(6, 37, 14), // "SQLiteStorage*"
QT_MOC_LITERAL(7, 52, 7), // "storage"
QT_MOC_LITERAL(8, 60, 10), // "toLections"
QT_MOC_LITERAL(9, 71, 9), // "logToUser"
QT_MOC_LITERAL(10, 81, 15), // "on_exit_clicked"
QT_MOC_LITERAL(11, 97, 19), // "on_editInfo_clicked"
QT_MOC_LITERAL(12, 117, 21), // "on_meLections_clicked"
QT_MOC_LITERAL(13, 139, 17) // "on_exit_2_clicked"

    },
    "UserWindow\0ex\0\0editUserNow\0User\0user\0"
    "SQLiteStorage*\0storage\0toLections\0"
    "logToUser\0on_exit_clicked\0on_editInfo_clicked\0"
    "on_meLections_clicked\0on_exit_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,
       8,    2,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   65,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserWindow *_t = static_cast<UserWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ex(); break;
        case 1: _t->editUserNow((*reinterpret_cast< User(*)>(_a[1])),(*reinterpret_cast< SQLiteStorage*(*)>(_a[2]))); break;
        case 2: _t->toLections((*reinterpret_cast< User(*)>(_a[1])),(*reinterpret_cast< SQLiteStorage*(*)>(_a[2]))); break;
        case 3: _t->logToUser((*reinterpret_cast< User(*)>(_a[1])),(*reinterpret_cast< SQLiteStorage*(*)>(_a[2]))); break;
        case 4: _t->on_exit_clicked(); break;
        case 5: _t->on_editInfo_clicked(); break;
        case 6: _t->on_meLections_clicked(); break;
        case 7: _t->on_exit_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UserWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserWindow::ex)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UserWindow::*_t)(User , SQLiteStorage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserWindow::editUserNow)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UserWindow::*_t)(User , SQLiteStorage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserWindow::toLections)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject UserWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UserWindow.data,
      qt_meta_data_UserWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UserWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UserWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UserWindow::ex()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UserWindow::editUserNow(User _t1, SQLiteStorage * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UserWindow::toLections(User _t1, SQLiteStorage * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
