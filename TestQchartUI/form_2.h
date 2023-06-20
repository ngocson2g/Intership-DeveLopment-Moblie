#ifndef FORM_2_H
#define FORM_2_H

#include <QWidget>

#include <QtCharts/QChartView>

#include <QtCharts/QPieSeries>


namespace Ui {
class Form_2;
}

class Form_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form_2(QWidget *parent = nullptr);
    ~Form_2();

public slots:
    void createPieChart(QChart *charts, QPieSeries *series, QChartView *chartView);


public:
    QPieSeries *seriesP = new QPieSeries();

    QChartView *chartView = new QChartView();

    QChart *chart = new QChart();


private:
    Ui::Form_2 *ui;
};

#endif // FORM_2_H
