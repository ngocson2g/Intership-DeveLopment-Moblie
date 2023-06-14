/****************************************************************************
** Meta object code from reading C++ file 'appchat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../appchat/appchat.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

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
struct qt_meta_stringdata_CLASSAppChatENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAppChatENDCLASS = QtMocHelpers::stringData(
    "AppChat",
    "checkIps",
    "",
    "Read_Data_From_Socket",
    "Read_Data_From_Server",
    "newConnection",
    "on_pushButton_Send_clicked",
    "on_pushButton_check_clicked",
    "on_pushButton_Connect_clicked",
    "check_connect",
    "on_pushButton_back_clicked",
    "on_pushButton_open_app_clicked",
    "on_ips_available",
    "listIps"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAppChatENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[8];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[22];
    char stringdata5[14];
    char stringdata6[27];
    char stringdata7[28];
    char stringdata8[30];
    char stringdata9[14];
    char stringdata10[27];
    char stringdata11[31];
    char stringdata12[17];
    char stringdata13[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAppChatENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAppChatENDCLASS_t qt_meta_stringdata_CLASSAppChatENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "AppChat"
        QT_MOC_LITERAL(8, 8),  // "checkIps"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 21),  // "Read_Data_From_Socket"
        QT_MOC_LITERAL(40, 21),  // "Read_Data_From_Server"
        QT_MOC_LITERAL(62, 13),  // "newConnection"
        QT_MOC_LITERAL(76, 26),  // "on_pushButton_Send_clicked"
        QT_MOC_LITERAL(103, 27),  // "on_pushButton_check_clicked"
        QT_MOC_LITERAL(131, 29),  // "on_pushButton_Connect_clicked"
        QT_MOC_LITERAL(161, 13),  // "check_connect"
        QT_MOC_LITERAL(175, 26),  // "on_pushButton_back_clicked"
        QT_MOC_LITERAL(202, 30),  // "on_pushButton_open_app_clicked"
        QT_MOC_LITERAL(233, 16),  // "on_ips_available"
        QT_MOC_LITERAL(250, 7)   // "listIps"
    },
    "AppChat",
    "checkIps",
    "",
    "Read_Data_From_Socket",
    "Read_Data_From_Server",
    "newConnection",
    "on_pushButton_Send_clicked",
    "on_pushButton_check_clicked",
    "on_pushButton_Connect_clicked",
    "check_connect",
    "on_pushButton_back_clicked",
    "on_pushButton_open_app_clicked",
    "on_ips_available",
    "listIps"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAppChatENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    1,   90,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject AppChat::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSAppChatENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAppChatENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAppChatENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AppChat, std::true_type>,
        // method 'checkIps'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Read_Data_From_Socket'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'Read_Data_From_Server'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'newConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Send_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_check_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'check_connect'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_pushButton_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_open_app_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ips_available'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QString>, std::false_type>
    >,
    nullptr
} };

void AppChat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppChat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkIps(); break;
        case 1: { bool _r = _t->Read_Data_From_Socket();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->Read_Data_From_Server();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->newConnection(); break;
        case 4: _t->on_pushButton_Send_clicked(); break;
        case 5: _t->on_pushButton_check_clicked(); break;
        case 6: _t->on_pushButton_Connect_clicked(); break;
        case 7: { bool _r = _t->check_connect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->on_pushButton_back_clicked(); break;
        case 9: _t->on_pushButton_open_app_clicked(); break;
        case 10: _t->on_ips_available((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppChat::*)();
            if (_t _q_method = &AppChat::checkIps; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *AppChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppChat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAppChatENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AppChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void AppChat::checkIps()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
