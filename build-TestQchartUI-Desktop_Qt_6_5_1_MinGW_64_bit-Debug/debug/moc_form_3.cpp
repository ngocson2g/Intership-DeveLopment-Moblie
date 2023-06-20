/****************************************************************************
** Meta object code from reading C++ file 'form_3.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TestQchartUI/form_3.h"
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
#error "The header file 'form_3.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSForm_3ENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSForm_3ENDCLASS = QtMocHelpers::stringData(
    "Form_3",
    "createCandlestickChart",
    "",
    "QChart*",
    "charts",
    "QCandlestickSeries*",
    "series",
    "QChartView*",
    "chartView",
    "readCandlestickSet",
    "QCandlestickSet*",
    "data"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSForm_3ENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[7];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[7];
    char stringdata5[20];
    char stringdata6[7];
    char stringdata7[12];
    char stringdata8[10];
    char stringdata9[19];
    char stringdata10[17];
    char stringdata11[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSForm_3ENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSForm_3ENDCLASS_t qt_meta_stringdata_CLASSForm_3ENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Form_3"
        QT_MOC_LITERAL(7, 22),  // "createCandlestickChart"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 7),  // "QChart*"
        QT_MOC_LITERAL(39, 6),  // "charts"
        QT_MOC_LITERAL(46, 19),  // "QCandlestickSeries*"
        QT_MOC_LITERAL(66, 6),  // "series"
        QT_MOC_LITERAL(73, 11),  // "QChartView*"
        QT_MOC_LITERAL(85, 9),  // "chartView"
        QT_MOC_LITERAL(95, 18),  // "readCandlestickSet"
        QT_MOC_LITERAL(114, 16),  // "QCandlestickSet*"
        QT_MOC_LITERAL(131, 4)   // "data"
    },
    "Form_3",
    "createCandlestickChart",
    "",
    "QChart*",
    "charts",
    "QCandlestickSeries*",
    "series",
    "QChartView*",
    "chartView",
    "readCandlestickSet",
    "QCandlestickSet*",
    "data"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSForm_3ENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   26,    2, 0x0a,    1 /* Public */,
       9,    1,   33,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    0x80000000 | 10, QMetaType::QString,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject Form_3::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSForm_3ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSForm_3ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSForm_3ENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Form_3, std::true_type>,
        // method 'createCandlestickChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChart *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCandlestickSeries *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChartView *, std::false_type>,
        // method 'readCandlestickSet'
        QtPrivate::TypeAndForceComplete<QCandlestickSet *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Form_3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Form_3 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createCandlestickChart((*reinterpret_cast< std::add_pointer_t<QChart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCandlestickSeries*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QChartView*>>(_a[3]))); break;
        case 1: { QCandlestickSet* _r = _t->readCandlestickSet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QCandlestickSet**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
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

const QMetaObject *Form_3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form_3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSForm_3ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Form_3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
