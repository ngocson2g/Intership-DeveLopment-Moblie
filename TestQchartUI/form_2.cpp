#include "form_2.h"
#include "ui_form_2.h"

Form_2::Form_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_2)
{
    ui->setupUi(this);

    createPieChart(chart, seriesP, chartView);
}

Form_2::~Form_2()
{
    delete ui;
}

void Form_2::createPieChart(QChart *charts, QPieSeries *series, QChartView *chartView)
{
    series->append("C++", 80);
    series->append("Python", 70);
    series->append("Java", 50);
    series->append("C#", 40);
    series->append("PHP", 30);

    charts->addSeries(series);
    charts->setTitle("Pie Chart Example");


    chartView = new QChartView(charts);
    //chartView->setParent(ui->horizontalLayoutWidget);
    ui->horizontalLayoutWidget->layout()->addWidget(chartView);
}


