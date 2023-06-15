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
    "test",
    "",
    "on_get_myAddress",
    "on_get_listConnectServer",
    "on_connect_click",
    "address",
    "Read_Data_From_Server",
    "Read_Data_From_Socket",
    "check_connect"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[25];
    char stringdata5[17];
    char stringdata6[8];
    char stringdata7[22];
    char stringdata8[22];
    char stringdata9[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSfunctionAcctionENDCLASS_t qt_meta_stringdata_CLASSfunctionAcctionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "functionAcction"
        QT_MOC_LITERAL(16, 4),  // "test"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 16),  // "on_get_myAddress"
        QT_MOC_LITERAL(39, 24),  // "on_get_listConnectServer"
        QT_MOC_LITERAL(64, 16),  // "on_connect_click"
        QT_MOC_LITERAL(81, 7),  // "address"
        QT_MOC_LITERAL(89, 21),  // "Read_Data_From_Server"
        QT_MOC_LITERAL(111, 21),  // "Read_Data_From_Socket"
        QT_MOC_LITERAL(133, 13)   // "check_connect"
    },
    "functionAcction",
    "test",
    "",
    "on_get_myAddress",
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
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x0a,    2 /* Public */,
       4,    0,   58,    2, 0x0a,    3 /* Public */,
       5,    1,   59,    2, 0x0a,    4 /* Public */,
       7,    0,   62,    2, 0x0a,    6 /* Public */,
       8,    0,   63,    2, 0x0a,    7 /* Public */,
       9,    0,   64,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    6,
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
        // method 'test'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        case 0: _t->test(); break;
        case 1: _t->on_get_myAddress(); break;
        case 2: _t->on_get_listConnectServer(); break;
        case 3: { bool _r = _t->on_connect_click((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->Read_Data_From_Server();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->Read_Data_From_Socket();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->check_connect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (functionAcction::*)();
            if (_t _q_method = &functionAcction::test; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void functionAcction::test()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
