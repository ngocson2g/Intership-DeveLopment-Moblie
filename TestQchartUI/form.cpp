#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    createLineChart(chart, seriesL, chartView);
}

Form::~Form()
{
    delete ui;
}

void Form::createLineChart(QChart *charts, QLineSeries *series, QChartView *chartView)
{
    series->append(0, 0);
    series->append(1, 2);
    series->append(2, 2);
    series->append(3, 3);
    series->append(4, 3);

    //chart->legend()->hide();
    charts->addSeries(series);
    charts->createDefaultAxes();
    charts->setTitle("Line Chart Example");


    charts->legend()->setVisible(true);
    charts->legend()->setAlignment(Qt::AlignBottom);

    chartView = new QChartView(charts);
    chartView->setRenderHint(QPainter::Antialiasing);
    //chartView->setParent(ui->horizontalLayoutWidget);
    chartView->setParent(ui->horizontalLayoutWidget);
}


