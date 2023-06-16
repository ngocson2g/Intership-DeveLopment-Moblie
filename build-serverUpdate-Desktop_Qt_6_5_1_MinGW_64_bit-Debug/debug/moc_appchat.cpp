/****************************************************************************
** Meta object code from reading C++ file 'appchat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../serverUpdate/appchat.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appchat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSappchatENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSappchatENDCLASS = QtMocHelpers::stringData(
    "appchat",
    "send_clicked",
    "",
    "address",
    "msg",
    "connection_clicked",
    "start_app",
    "on_write_msg",
    "user",
    "on_write_new_connection",
    "newConnection",
    "on_pushButton_send_clicked",
    "on_pushButton_connect_clicked",
    "on_pushButton_appchat_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSappchatENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[8];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[4];
    char stringdata5[19];
    char stringdata6[10];
    char stringdata7[13];
    char stringdata8[5];
    char stringdata9[24];
    char stringdata10[14];
    char stringdata11[27];
    char stringdata12[30];
    char stringdata13[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSappchatENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSappchatENDCLASS_t qt_meta_stringdata_CLASSappchatENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "appchat"
        QT_MOC_LITERAL(8, 12),  // "send_clicked"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 7),  // "address"
        QT_MOC_LITERAL(30, 3),  // "msg"
        QT_MOC_LITERAL(34, 18),  // "connection_clicked"
        QT_MOC_LITERAL(53, 9),  // "start_app"
        QT_MOC_LITERAL(63, 12),  // "on_write_msg"
        QT_MOC_LITERAL(76, 4),  // "user"
        QT_MOC_LITERAL(81, 23),  // "on_write_new_connection"
        QT_MOC_LITERAL(105, 13),  // "newConnection"
        QT_MOC_LITERAL(119, 26),  // "on_pushButton_send_clicked"
        QT_MOC_LITERAL(146, 29),  // "on_pushButton_connect_clicked"
        QT_MOC_LITERAL(176, 29)   // "on_pushButton_appchat_clicked"
    },
    "appchat",
    "send_clicked",
    "",
    "address",
    "msg",
    "connection_clicked",
    "start_app",
    "on_write_msg",
    "user",
    "on_write_new_connection",
    "newConnection",
    "on_pushButton_send_clicked",
    "on_pushButton_connect_clicked",
    "on_pushButton_appchat_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSappchatENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       5,    1,   67,    2, 0x06,    4 /* Public */,
       6,    0,   70,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   71,    2, 0x08,    7 /* Private */,
       9,    1,   76,    2, 0x08,   10 /* Private */,
      11,    0,   79,    2, 0x08,   12 /* Private */,
      12,    0,   80,    2, 0x08,   13 /* Private */,
      13,    0,   81,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::Int,

 // slots: parameters
    QMetaType::Int, QMetaType::Bool, QMetaType::QString,    8,    4,
    QMetaType::Int, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject appchat::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSappchatENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSappchatENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSappchatENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<appchat, std::true_type>,
        // method 'send_clicked'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'connection_clicked'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'start_app'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_write_msg'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_write_new_connection'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_pushButton_send_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_appchat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void appchat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<appchat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->send_clicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->connection_clicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->start_app();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->on_write_msg((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->on_write_new_connection((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_pushButton_send_clicked(); break;
        case 6: _t->on_pushButton_connect_clicked(); break;
        case 7: _t->on_pushButton_appchat_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = int (appchat::*)(QString , QString );
            if (_t _q_method = &appchat::send_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = int (appchat::*)(QString );
            if (_t _q_method = &appchat::connection_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = int (appchat::*)();
            if (_t _q_method = &appchat::start_app; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *appchat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *appchat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSappchatENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int appchat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
int appchat::send_clicked(QString _t1, QString _t2)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int appchat::connection_clicked(QString _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
int appchat::start_app()
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}
QT_WARNING_POP
