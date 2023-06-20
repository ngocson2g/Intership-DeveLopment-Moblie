#ifndef FORM_3_H
#define FORM_3_H

#include <QWidget>

#include <QtCharts/QChartView>
#include <QtCharts/QCandlestickSeries>
#include <QtCharts/QCandlestickSet>
#include <QtCharts>
#include <QtCore/QTextStream>
#include <QDateTime>

namespace Ui {
class Form_3;
}

class Form_3 : public QWidget
{
    Q_OBJECT

public:
    explicit Form_3(QWidget *parent = nullptr);
    ~Form_3();

public slots:
    void createCandlestickChart(QChart *charts, QCandlestickSeries *series, QChartView *chartView);


    QCandlestickSet *readCandlestickSet(QString data);

public:
    QCandlestickSeries *seriesC = new QCandlestickSeries();

    QChartView *chartView = new QChartView();

    QChart *chart = new QChart();

private:
    Ui::Form_3 *ui;
};

#endif // FORM_3_H
