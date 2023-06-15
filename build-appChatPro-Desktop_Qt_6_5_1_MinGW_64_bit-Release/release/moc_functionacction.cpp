/****************************************************************************
** Meta object code from reading C++ file 'functionacction.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../appChatPro/functionacction.h"
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
    "on_get_myAddress",
    "",
    "on_get_listConnectServer",
    "on_connect_click",
    "address",
    "Read_Data_From_Server",
    "Read_Data_From_Socket",
    "check_connect"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[16];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[17];
    char stringdata5[8];
    char stringdata6[22];
    char stringdata7[22];
    char stringdata8[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t qt_meta_stringdata_CLASSfunctionAcctionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "functionAcction"
        QT_MOC_LITERAL(16, 16),  // "on_get_myAddress"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 24),  // "on_get_listConnectServer"
        QT_MOC_LITERAL(59, 16),  // "on_connect_click"
        QT_MOC_LITERAL(76, 7),  // "address"
        QT_MOC_LITERAL(84, 21),  // "Read_Data_From_Server"
        QT_MOC_LITERAL(106, 21),  // "Read_Data_From_Socket"
        QT_MOC_LITERAL(128, 13)   // "check_connect"
    },
    "functionAcction",
    "on_get_myAddress",
    "",
    "on_get_listConnectServer",
    "on_connect_click",
    "address",
    "Read_Data_From_Server",
    "Read_Data_From_Socket",
    "check_connect"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSfunctionAcctionENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    0,   51,    2, 0x0a,    2 /* Public */,
       4,    1,   52,    2, 0x0a,    3 /* Public */,
       6,    0,   55,    2, 0x0a,    5 /* Public */,
       7,    0,   56,    2, 0x0a,    6 /* Public */,
       8,    0,   57,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,

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
        // method 'on_get_myAddress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_get_listConnectServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_connect_click'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'Read_Data_From_Server'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'Read_Data_From_Socket'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'check_connect'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void functionAcction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<functionAcction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_get_myAddress(); break;
        case 1: _t->on_get_listConnectServer(); break;
        case 2: { bool _r = _t->on_connect_click((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->Read_Data_From_Server();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->Read_Data_From_Socket();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->check_connect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
