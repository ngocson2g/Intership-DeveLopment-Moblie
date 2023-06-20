#ifndef FORM_H
#define FORM_H

#include <QWidget>

//#include <QtCharts>
#include <QtCharts/QChartView>

#include <QtCharts/QLineSeries>


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

public:
    QLineSeries *seriesL = new QLineSeries();



    QChartView *chartView = new QChartView();

    QChart *chart = new QChart();

private:
    Ui::Form *ui;
};

#endif // FORM_H
