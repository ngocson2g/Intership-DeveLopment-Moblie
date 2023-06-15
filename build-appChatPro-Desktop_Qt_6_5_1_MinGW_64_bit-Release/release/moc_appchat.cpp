/****************************************************************************
** Meta object code from reading C++ file 'appchat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../appChatPro/appchat.h"
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
struct qt_meta_stringdata_CLASSappChatENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSappChatENDCLASS = QtMocHelpers::stringData(
    "appChat",
    "get_myAddress",
    "",
    "get_listConnectServer",
    "send_messsage",
    "message",
    "connect_click",
    "address",
    "on_pushButton_back_clicked",
    "on_pushButton_connect_clicked",
    "on_pushButton_appchat_clicked",
    "on_pushButton_send_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSappChatENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[8];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[14];
    char stringdata5[8];
    char stringdata6[14];
    char stringdata7[8];
    char stringdata8[27];
    char stringdata9[30];
    char stringdata10[30];
    char stringdata11[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSappChatENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSappChatENDCLASS_t qt_meta_stringdata_CLASSappChatENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "appChat"
        QT_MOC_LITERAL(8, 13),  // "get_myAddress"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 21),  // "get_listConnectServer"
        QT_MOC_LITERAL(45, 13),  // "send_messsage"
        QT_MOC_LITERAL(59, 7),  // "message"
        QT_MOC_LITERAL(67, 13),  // "connect_click"
        QT_MOC_LITERAL(81, 7),  // "address"
        QT_MOC_LITERAL(89, 26),  // "on_pushButton_back_clicked"
        QT_MOC_LITERAL(116, 29),  // "on_pushButton_connect_clicked"
        QT_MOC_LITERAL(146, 29),  // "on_pushButton_appchat_clicked"
        QT_MOC_LITERAL(176, 26)   // "on_pushButton_send_clicked"
    },
    "appChat",
    "get_myAddress",
    "",
    "get_listConnectServer",
    "send_messsage",
    "message",
    "connect_click",
    "address",
    "on_pushButton_back_clicked",
    "on_pushButton_connect_clicked",
    "on_pushButton_appchat_clicked",
    "on_pushButton_send_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSappChatENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    1,   64,    2, 0x06,    3 /* Public */,
       6,    1,   67,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   70,    2, 0x08,    7 /* Private */,
       9,    0,   71,    2, 0x08,    8 /* Private */,
      10,    0,   72,    2, 0x08,    9 /* Private */,
      11,    0,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject appChat::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSappChatENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSappChatENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSappChatENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<appChat, std::true_type>,
        // method 'get_myAddress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'get_listConnectServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_messsage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'connect_click'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_pushButton_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_appchat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_send_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void appChat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<appChat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->get_myAddress(); break;
        case 1: _t->get_listConnectServer(); break;
        case 2: _t->send_messsage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->connect_click((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_pushButton_back_clicked(); break;
        case 5: _t->on_pushButton_connect_clicked(); break;
        case 6: _t->on_pushButton_appchat_clicked(); break;
        case 7: _t->on_pushButton_send_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (appChat::*)();
            if (_t _q_method = &appChat::get_myAddress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (appChat::*)();
            if (_t _q_method = &appChat::get_listConnectServer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (appChat::*)(QString );
            if (_t _q_method = &appChat::send_messsage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (appChat::*)(QString );
            if (_t _q_method = &appChat::connect_click; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *appChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *appChat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSappChatENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int appChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void appChat::get_myAddress()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void appChat::get_listConnectServer()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void appChat::send_messsage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void appChat::connect_click(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
