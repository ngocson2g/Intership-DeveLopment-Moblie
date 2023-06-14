/****************************************************************************
** Meta object code from reading C++ file 'appchat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AppChat2/appchat.h"
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
struct qt_meta_stringdata_CLASSAppchatENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAppchatENDCLASS = QtMocHelpers::stringData(
    "Appchat",
    "Read_Data_From_Socket",
    "",
    "Read_Data_From_Server",
    "Send_Data_To_Socket",
    "Send_Data_To_Server",
    "Check_Connect",
    "QTcpSocket*",
    "socket",
    "Create_List_Connect_Client",
    "on_pushButton_Send_Msg_clicked",
    "on_pushButton_Connect_clicked",
    "newConnection",
    "Add_New_Connect",
    "Get_My_IPaddress"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAppchatENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[8];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[14];
    char stringdata7[12];
    char stringdata8[7];
    char stringdata9[27];
    char stringdata10[31];
    char stringdata11[30];
    char stringdata12[14];
    char stringdata13[16];
    char stringdata14[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAppchatENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAppchatENDCLASS_t qt_meta_stringdata_CLASSAppchatENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Appchat"
        QT_MOC_LITERAL(8, 21),  // "Read_Data_From_Socket"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 21),  // "Read_Data_From_Server"
        QT_MOC_LITERAL(53, 19),  // "Send_Data_To_Socket"
        QT_MOC_LITERAL(73, 19),  // "Send_Data_To_Server"
        QT_MOC_LITERAL(93, 13),  // "Check_Connect"
        QT_MOC_LITERAL(107, 11),  // "QTcpSocket*"
        QT_MOC_LITERAL(119, 6),  // "socket"
        QT_MOC_LITERAL(126, 26),  // "Create_List_Connect_Client"
        QT_MOC_LITERAL(153, 30),  // "on_pushButton_Send_Msg_clicked"
        QT_MOC_LITERAL(184, 29),  // "on_pushButton_Connect_clicked"
        QT_MOC_LITERAL(214, 13),  // "newConnection"
        QT_MOC_LITERAL(228, 15),  // "Add_New_Connect"
        QT_MOC_LITERAL(244, 16)   // "Get_My_IPaddress"
    },
    "Appchat",
    "Read_Data_From_Socket",
    "",
    "Read_Data_From_Server",
    "Send_Data_To_Socket",
    "Send_Data_To_Server",
    "Check_Connect",
    "QTcpSocket*",
    "socket",
    "Create_List_Connect_Client",
    "on_pushButton_Send_Msg_clicked",
    "on_pushButton_Connect_clicked",
    "newConnection",
    "Add_New_Connect",
    "Get_My_IPaddress"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAppchatENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    1,   84,    2, 0x08,    5 /* Private */,
       9,    1,   87,    2, 0x08,    7 /* Private */,
      10,    0,   90,    2, 0x08,    9 /* Private */,
      11,    0,   91,    2, 0x08,   10 /* Private */,
      12,    0,   92,    2, 0x08,   11 /* Private */,
      13,    1,   93,    2, 0x08,   12 /* Private */,
      14,    0,   96,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::QString,

       0        // eod
};

Q_CONSTINIT const QMetaObject Appchat::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSAppchatENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAppchatENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAppchatENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Appchat, std::true_type>,
        // method 'Read_Data_From_Socket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Read_Data_From_Server'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Send_Data_To_Socket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Send_Data_To_Server'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Check_Connect'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTcpSocket *, std::false_type>,
        // method 'Create_List_Connect_Client'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTcpSocket *, std::false_type>,
        // method 'on_pushButton_Send_Msg_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Add_New_Connect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTcpSocket *, std::false_type>,
        // method 'Get_My_IPaddress'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Appchat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Appchat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Read_Data_From_Socket(); break;
        case 1: _t->Read_Data_From_Server(); break;
        case 2: _t->Send_Data_To_Socket(); break;
        case 3: _t->Send_Data_To_Server(); break;
        case 4: { bool _r = _t->Check_Connect((*reinterpret_cast< std::add_pointer_t<QTcpSocket*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->Create_List_Connect_Client((*reinterpret_cast< std::add_pointer_t<QTcpSocket*>>(_a[1]))); break;
        case 6: _t->on_pushButton_Send_Msg_clicked(); break;
        case 7: _t->on_pushButton_Connect_clicked(); break;
        case 8: _t->newConnection(); break;
        case 9: _t->Add_New_Connect((*reinterpret_cast< std::add_pointer_t<QTcpSocket*>>(_a[1]))); break;
        case 10: { QString _r = _t->Get_My_IPaddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTcpSocket* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTcpSocket* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTcpSocket* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Appchat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Appchat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAppchatENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Appchat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
