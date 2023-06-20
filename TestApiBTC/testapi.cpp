#include "testapi.h"
#include "ui_testapi.h"

TestAPI::TestAPI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TestAPI)
{
    ui->setupUi(this);

    fetchDataFromAPI();
}

TestAPI::~TestAPI()
{
    delete ui;
}

//    if (reply->error() == QNetworkReply::NoError)
//    {
//        QByteArray responseData = reply->readAll();
//        QString responseString(responseData);

//        // Print the response data
//        qDebug() << responseString;
//    }
//    else
//    {
//        qDebug() << "Error: " << reply->errorString();
//    }

void TestAPI::fetchDataFromAPI()
{
    QNetworkAccessManager manager;
    QNetworkRequest request;

    QString apiUrl = "https://api.binance.com/api/v3/klines?symbol=BTCUSDT&interval=1m&limit=10";
    request.setUrl(QUrl(apiUrl));

    QNetworkReply *reply = manager.get(request);
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    QCandlestickSeries *acmeSeries = new QCandlestickSeries();
    acmeSeries->setName("QCandlestick Chart Example");
    acmeSeries->setIncreasingColor(QColor(Qt::green));
    acmeSeries->setDecreasingColor(QColor(Qt::red));

    QList <QDateTime> categories;


    if (reply->error() == QNetworkReply::NoError) {
        QByteArray rawData = reply->readAll();
        QString data = QString::fromUtf8(rawData);
        QStringList dataList = data.split("[");



        for (int i = 1; i < dataList.count(); ++i) {
            QStringList valueList = dataList[i].split(",");
            if (valueList.count() >= 5) {
                QString timestampStr = valueList[0].remove("\"");
                qint64 timestamp = timestampStr.toLongLong();
                QDateTime dateTime = QDateTime::fromMSecsSinceEpoch(timestamp);

                QString openStr = valueList[1].remove("\"");
                qreal open = openStr.toDouble();

                QString highStr = valueList[2].remove("\"");
                qreal high = highStr.toDouble();

                QString lowStr = valueList[3].remove("\"");
                qreal low = lowStr.toDouble();

                QString closeStr = valueList[4].remove("\"");
                qreal close = closeStr.toDouble();

                qDebug() << "Timestamp:" << dateTime.toString("yyyy-MM-dd hh:mm:ss");
                qDebug() << "Open:" << open;
                qDebug() << "High:" << high;
                qDebug() << "Low:" << low;
                qDebug() << "Close:" << close;
                qDebug() << "-------------";

                QCandlestickSet *candlestickSet = new QCandlestickSet();
                candlestickSet->setTimestamp(timestamp);
                candlestickSet->setOpen(open);
                candlestickSet->setHigh(high);
                candlestickSet->setLow(low);
                candlestickSet->setClose(close);
                acmeSeries->append(candlestickSet);

                categories <<QDateTime::fromMSecsSinceEpoch(timestamp);//.date().toString(Qt::ISODate);
            }
        }
    } else {
        qDebug() << "Error:" << reply->errorString();
    }

    QChart *chart = new QChart();
    chart->addSeries(acmeSeries);
    chart->setTitle("Data BTC Now");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    chart->createDefaultAxes();

//    QBarCategoryAxis *axisX = qobject_cast<QBarCategoryAxis *>(chart->axes(Qt::Horizontal).at(0));
//    axisX->setCategories(categories);
    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setTickCount(categories.count()); // Số lượng giờ trong danh sách
    axisX->setFormat("hh:mm"); // Định dạng hiển thị giờ
    axisX->setTitleText("Time"); // Tiêu đề trục X

    QValueAxis *axisY = qobject_cast<QValueAxis *>(chart->axes(Qt::Vertical).at(0));
    axisY->setMax(axisY->max() * 1.01);
    axisY->setMin(axisY->min() * 0.99);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->setParent(ui->horizontalLayoutWidget);

    reply->deleteLater();
}

