#include "form_3.h"
#include "ui_form_3.h"

Form_3::Form_3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_3)
{
    ui->setupUi(this);

    createCandlestickChart(chart, seriesC, chartView);

}

Form_3::~Form_3()
{
    delete ui;
}

void Form_3::createCandlestickChart(QChart *charts, QCandlestickSeries *series, QChartView *chartView)
{
    QCandlestickSeries *acmeSeries = new QCandlestickSeries();
    acmeSeries->setName("QCandlestick Chart Example");
    acmeSeries->setIncreasingColor(QColor(Qt::green));
    acmeSeries->setDecreasingColor(QColor(Qt::red));


    ///
    ///
    ///
    QStringList categories;
    acmeSeries->append(readCandlestickSet("1435708800000 126.90 126.94 125.99 126.60"));
    qint64 timestamp = 1435708800000;
    categories << QDateTime::fromMSecsSinceEpoch(timestamp).date().toString(Qt::ISODate);

    acmeSeries->append(readCandlestickSet("1435795200000 126.69 126.69 126.69 126.69"));
    timestamp = 1435795200000;
    categories << QDateTime::fromMSecsSinceEpoch(timestamp).date().toString(Qt::ISODate);

    acmeSeries->append(readCandlestickSet("1436140800000 124.85 126.23 124.85 126.00"));
    timestamp = 1436140800000;
    categories << QDateTime::fromMSecsSinceEpoch(timestamp).date().toString(Qt::ISODate);
    ///

    charts->addSeries(acmeSeries);
    charts->setTitle("Acme Ltd Historical Data (July 2015)");
    charts->setAnimationOptions(QChart::SeriesAnimations);

    charts->createDefaultAxes();

    QBarCategoryAxis *axisX = qobject_cast<QBarCategoryAxis *>(charts->axes(Qt::Horizontal).at(0));
    axisX->setCategories(categories);

    QValueAxis *axisY = qobject_cast<QValueAxis *>(charts->axes(Qt::Vertical).at(0));
    axisY->setMax(axisY->max() * 1.01);
    axisY->setMin(axisY->min() * 0.99);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->setParent(ui->horizontalLayoutWidget);

}



QCandlestickSet *Form_3::readCandlestickSet(QString data)
{
    QString line = data;  ///
    if (line.startsWith("#") || line.isEmpty())
        return 0;
    QStringList strList = line.split(QLatin1Char(' '), Qt::SkipEmptyParts);
    if (strList.count() != 5)
        return 0;

    const qreal timestamp = strList.at(0).toDouble();
    const qreal open = strList.at(1).toDouble();
    const qreal high = strList.at(2).toDouble();
    const qreal low = strList.at(3).toDouble();
    const qreal close = strList.at(4).toDouble();

    QCandlestickSet *candlestickSet = new QCandlestickSet(timestamp);
    candlestickSet->setOpen(open);
    candlestickSet->setHigh(high);
    candlestickSet->setLow(low);
    candlestickSet->setClose(close);

    return candlestickSet;


}



