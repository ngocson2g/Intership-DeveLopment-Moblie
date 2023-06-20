/****************************************************************************
** Meta object code from reading C++ file 'form.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../testQchart/form.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFormENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFormENDCLASS = QtMocHelpers::stringData(
    "Form",
    "createLineChart",
    "",
    "QChart*",
    "charts",
    "QLineSeries*",
    "series",
    "QChartView*",
    "chartView",
    "createPieChart",
    "QPieSeries*",
    "createCandlestickChart",
    "QCandlestickSeries*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFormENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[5];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[7];
    char stringdata5[13];
    char stringdata6[7];
    char stringdata7[12];
    char stringdata8[10];
    char stringdata9[15];
    char stringdata10[12];
    char stringdata11[23];
    char stringdata12[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFormENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFormENDCLASS_t qt_meta_stringdata_CLASSFormENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Form"
        QT_MOC_LITERAL(5, 15),  // "createLineChart"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 7),  // "QChart*"
        QT_MOC_LITERAL(30, 6),  // "charts"
        QT_MOC_LITERAL(37, 12),  // "QLineSeries*"
        QT_MOC_LITERAL(50, 6),  // "series"
        QT_MOC_LITERAL(57, 11),  // "QChartView*"
        QT_MOC_LITERAL(69, 9),  // "chartView"
        QT_MOC_LITERAL(79, 14),  // "createPieChart"
        QT_MOC_LITERAL(94, 11),  // "QPieSeries*"
        QT_MOC_LITERAL(106, 22),  // "createCandlestickChart"
        QT_MOC_LITERAL(129, 19)   // "QCandlestickSeries*"
    },
    "Form",
    "createLineChart",
    "",
    "QChart*",
    "charts",
    "QLineSeries*",
    "series",
    "QChartView*",
    "chartView",
    "createPieChart",
    "QPieSeries*",
    "createCandlestickChart",
    "QCandlestickSeries*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFormENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   32,    2, 0x0a,    1 /* Public */,
       9,    3,   39,    2, 0x0a,    5 /* Public */,
      11,    3,   46,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 10, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12, 0x80000000 | 7,    4,    6,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject Form::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSFormENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFormENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFormENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Form, std::true_type>,
        // method 'createLineChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChart *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineSeries *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChartView *, std::false_type>,
        // method 'createPieChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChart *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPieSeries *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChartView *, std::false_type>,
        // method 'createCandlestickChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChart *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCandlestickSeries *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChartView *, std::false_type>
    >,
    nullptr
} };

void Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Form *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createLineChart((*reinterpret_cast< std::add_pointer_t<QChart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLineSeries*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QChartView*>>(_a[3]))); break;
        case 1: _t->createPieChart((*reinterpret_cast< std::add_pointer_t<QChart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPieSeries*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QChartView*>>(_a[3]))); break;
        case 2: _t->createCandlestickChart((*reinterpret_cast< std::add_pointer_t<QChart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCandlestickSeries*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QChartView*>>(_a[3]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineSeries* >(); break;
            }
            break;
        case 1:
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCandlestickSeries* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QChart* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QChartView* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFormENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
