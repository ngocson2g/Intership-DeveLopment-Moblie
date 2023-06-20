#include "testqchart.h"
#include "ui_testqchart.h"

testQchart::testQchart(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testQchart)
{
    ui->setupUi(this);




    //createLineChart(chart, seriesL, chartView);
    //createPieChart(chart, seriesP, chartView);
    //createCandlestickChart(chart, seriesC, chartView);


}

testQchart::~testQchart()
{
    delete ui;
}



void testQchart::on_pushButton_Page_1_clicked()
{

    ui->stackedWidget->setCurrentIndex(0);

}


void testQchart::on_pushButton_Page_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    //chartView->close();
}

