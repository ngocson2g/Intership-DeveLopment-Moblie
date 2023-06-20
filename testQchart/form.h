#ifndef FORM_H
#define FORM_H

#include <QWidget>

#include <QtCharts>
#include <QChartView>

#include <QLineSeries>
#include <QPieSeries>

#include <QtCharts/QCandlestickSeries>
#include <QtCharts/QCandlestickSet>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

public slots:
    void createLineChart(QChart *charts, QLineSeries *series, QChartView *chartView);
    void createPieChart(QChart *charts, QPieSeries *series, QChartView *chartView);
    void createCandlestickChart(QChart *charts, QCandlestickSeries *series, QChartView *chartView);

public:
    QLineSeries *seriesL = new QLineSeries();
    QPieSeries *seriesP = new QPieSeries();
    QCandlestickSeries *seriesC = new QCandlestickSeries();

    QChartView *chartView = new QChartView();

    QChart *chart = new QChart();


private:
    Ui::Form *ui;
};

#endif // FORM_H
