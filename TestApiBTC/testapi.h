#ifndef TESTAPI_H
#define TESTAPI_H

#include <QMainWindow>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork>
#include <QtCharts/QChartView>
#include <QtCharts/QCandlestickSeries>
#include <QtCharts/QCandlestickSet>
#include <QtCharts/QDateTimeAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts>


QT_BEGIN_NAMESPACE
namespace Ui { class TestAPI; }
QT_END_NAMESPACE

class TestAPI : public QMainWindow
{
    Q_OBJECT

public:
    TestAPI(QWidget *parent = nullptr);
    ~TestAPI();

private slots:
    void fetchDataFromAPI();

private:
    Ui::TestAPI *ui;


};
#endif // TESTAPI_H
