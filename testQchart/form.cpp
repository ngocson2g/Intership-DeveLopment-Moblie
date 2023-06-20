#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void testQchart::createLineChart(QChart *charts, QLineSeries *series, QChartView *chartView)
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
    ui->horizontalLayout_1->addWidget(chartView);
    //    ui->

}

void testQchart::createPieChart(QChart *charts, QPieSeries *series, QChartView *chartView)
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
    ui->horizontalLayout_2->addWidget(chartView);


}

void testQchart::createCandlestickChart(QChart *charts, QCandlestickSeries *series, QChartView *chartView)
{
    series = new QCandlestickSeries();
    series->setName("Candlestick Chart Example");

    //(Open, High, Low, Close)
    series->append(new QCandlestickSet(5, 10, 0, 3));
    series->append(new QCandlestickSet(7, 13, 4, 6));
    //series->append(new QCandlestickSet(6, 11, 3, 9));
    //series->append(new QCandlestickSet(9, 13, 5, 7));

    //charts = new QChart();
    charts->addSeries(series);
    charts->setTitle("Candlestick Chart Example");
    charts->createDefaultAxes();
    charts->legend()->hide();

    //charts->legend()->setVisible(true);
    //charts->legend()->setAlignment(Qt::AlignBottom);

    //    charts->setAxisX(axisX, series);
    //    charts->setAxisY(axisY, series);

    //    QDateTimeAxis *axisX = new QDateTimeAxis();
    //    axisX->setTickCount(10);
    //    axisX->setFormat("dd-MM-yyyy");
    //    charts->addAxis(axisX, Qt::AlignBottom);
    //    series->attachAxis(axisX);

    //    QValueAxis *axisY = new QValueAxis();
    //    axisY->setLabelFormat("%.2f");
    //    charts->addAxis(axisY, Qt::AlignLeft);
    //    series->attachAxis(axisY);



    chartView = new QChartView(charts);
    chartView->setRenderHint(QPainter::Antialiasing);

    //chartView->setParent(ui->horizontalLayoutWidget);
    ui->horizontalLayoutWidget->layout()->addWidget(chartView);
}
