#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graphicdisplay.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    graphicDisplay* display1;
    graphicDisplay* display2;
    QPushButton* detail;
    QPushButton* start;
    QLabel* result;
    void startDiff();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
