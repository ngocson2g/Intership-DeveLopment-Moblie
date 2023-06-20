#ifndef TESTQCHART_H
#define TESTQCHART_H

#include <QMainWindow>



#include "form.h"

QT_BEGIN_NAMESPACE
namespace Ui { class testQchart; }
QT_END_NAMESPACE

class testQchart : public QMainWindow
{
    Q_OBJECT

public:
    testQchart(QWidget *parent = nullptr);
    ~testQchart();

private:
    Ui::testQchart *ui;

private slots:



    void on_pushButton_Page_1_clicked();
    void on_pushButton_Page_2_clicked();

private:

#endif // TESTQCHART_H
