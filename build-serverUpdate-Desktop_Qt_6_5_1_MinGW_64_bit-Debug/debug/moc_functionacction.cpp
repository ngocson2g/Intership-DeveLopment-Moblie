/****************************************************************************
** Meta object code from reading C++ file 'functionacction.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../serverUpdate/functionacction.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'functionacction.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSfunctionAcctionENDCLASS = QtMocHelpers::stringData(
    "functionAcction",
    "write_msg",
    "",
    "user",
    "msg",
    "write_new_connection",
    "newConnection",
    "addNewConnection",
    "QTcpSocket*",
    "socket",
    "Read_Data",
    "on_send_clicked",
    "address",
    "on_connection_clicked",
    "on_start_app"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[16];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[4];
    char stringdata5[21];
    char stringdata6[14];
    char stringdata7[17];
    char stringdata8[12];
    char stringdata9[7];
    char stringdata10[10];
    char stringdata11[16];
    char stringdata12[8];
    char stringdata13[22];
    char stringdata14[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t qt_meta_stringdata_CLASSfunctionAcctionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "functionAcction"
        QT_MOC_LITERAL(16, 9),  // "write_msg"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 4),  // "user"
        QT_MOC_LITERAL(32, 3),  // "msg"
        QT_MOC_LITERAL(36, 20),  // "write_new_connection"
        QT_MOC_LITERAL(57, 13),  // "newConnection"
        QT_MOC_LITERAL(71, 16),  // "addNewConnection"
        QT_MOC_LITERAL(88, 11),  // "QTcpSocket*"
        QT_MOC_LITERAL(100, 6),  // "socket"
        QT_MOC_LITERAL(107, 9),  // "Read_Data"
        QT_MOC_LITERAL(117, 15),  // "on_send_clicked"
        QT_MOC_LITERAL(133, 7),  // "address"
        QT_MOC_LITERAL(141, 21),  // "on_connection_clicked"
        QT_MOC_LITERAL(163, 12)   // "on_start_app"
    },
    "functionAcction",
    "write_msg",
    "",
    "user",
    "msg",
    "write_new_connection",
    "newConnection",
    "addNewConnection",
    "QTcpSocket*",
    "socket",
    "Read_Data",
    "on_send_clicked",
    "address",
    "on_connection_clicked",
    "on_start_app"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSfunctionAcctionENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       5,    1,   67,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   70,    2, 0x0a,    6 /* Public */,
       7,    1,   71,    2, 0x0a,    7 /* Public */,
      10,    0,   74,    2, 0x0a,    9 /* Public */,
      11,    2,   75,    2, 0x0a,   10 /* Public */,
      13,    1,   80,    2, 0x0a,   13 /* Public */,
      14,    0,   83,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Int, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Int, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int, 0x80000000 | 8,    9,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QString, QMetaType::QString,   12,    4,
    QMetaType::Int, QMetaType::QString,   12,
    QMetaType::Int,

       0        // eod
};

Q_CONSTINIT const QMetaObject functionAcction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSfunctionAcctionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSfunctionAcctionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<functionAcction, std::true_type>,
        // method 'write_msg'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'write_new_connection'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'newConnection'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addNewConnection'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTcpSocket *, std::false_type>,
        // method 'Read_Data'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_send_clicked'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_connection_clicked'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_start_app'
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void functionAcction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<functionAcction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->write_msg((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->write_new_connection((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->newConnection();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->addNewConnection((*reinterpret_cast< std::add_pointer_t<QTcpSocket*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->Read_Data();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->on_send_clicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->on_connection_clicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->on_start_app();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = int (functionAcction::*)(bool , QString );
            if (_t _q_method = &functionAcction::write_msg; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = int (functionAcction::*)(QString );
            if (_t _q_method = &functionAcction::write_new_connection; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *functionAcction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *functionAcction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSfunctionAcctionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int functionAcction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
int functionAcction::write_msg(bool _t1, QString _t2)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int functionAcction::write_new_connection(QString _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_WARNING_POP
