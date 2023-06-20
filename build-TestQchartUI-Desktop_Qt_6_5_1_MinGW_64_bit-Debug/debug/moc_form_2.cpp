/****************************************************************************
** Meta object code from reading C++ file 'form_2.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TestQchartUI/form_2.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_2.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSForm_2ENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSForm_2ENDCLASS = QtMocHelpers::stringData(
    "Form_2",
    "createPieChart",
    "",
    "QChart*",
    "charts",
    "QPieSeries*",
    "series",
    "QChartView*",
    "chartView"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSForm_2ENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[7];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[7];
    char stringdata5[12];
    char stringdata6[7];
    char stringdata7[12];
    char stringdata8[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSForm_2ENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSForm_2ENDCLASS_t qt_meta_stringdata_CLASSForm_2ENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Form_2"
        QT_MOC_LITERAL(7, 14),  // "createPieChart"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 7),  // "QChart*"
        QT_MOC_LITERAL(31, 6),  // "charts"
        QT_MOC_LITERAL(38, 11),  // "QPieSeries*"
        QT_MOC_LITERAL(50, 6),  // "series"
        QT_MOC_LITERAL(57, 11),  // "QChartView*"
        QT_MOC_LITERAL(69, 9)   // "chartView"
    },
    "Form_2",
    "createPieChart",
    "",
    "QChart*",
    "charts",
    "QPieSeries*",
    "series",
    "QChartView*",
    "chartView"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSForm_2ENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject Form_2::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSForm_2ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSForm_2ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSForm_2ENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Form_2, std::true_type>,
        // method 'createPieChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChart *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPieSeries *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChartView *, std::false_type>
    >,
    nullptr
} };

void Form_2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Form_2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createPieChart((*reinterpret_cast< std::add_pointer_t<QChart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPieSeries*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QChartView*>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QChart* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QChartView* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPieSeries* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Form_2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form_2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSForm_2ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Form_2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
