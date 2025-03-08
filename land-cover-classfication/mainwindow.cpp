#include "mainwindow.h"
#include "graphicdisplay.h"
#include "./ui_mainwindow.h"
#include "pythoninvoker.h"
#include<QDebug>
#include<QMenuBar>
#include "tool.h"
#include<QVector>
#include<QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenuBar *menuBar = this->menuBar();
    QMenu* menuNew=tool::myFindMenu(menuBar,"menuNew");
    QAction* actionSingleTask=tool::myFindAction(menuNew,"actionSingleTask");
    QAction* actionMutiTask=tool::myFindAction(menuNew,"actionMutiTask");
    display1=ui->frame;
    display2=ui->frame_2;
    detail=ui->pushButtonDetail;
    start=ui->pushButtonStart;
    result=ui->resultImage;
    tool::loadJson(display1);
    tool::loadJson(display2);
    connect(display1->chooseBox, &QComboBox::currentIndexChanged, display1, &graphicDisplay::display);
    connect(display2->chooseBox, &QComboBox::currentIndexChanged, display2, &graphicDisplay::display);
    connect(start,&QPushButton::clicked,this,&MainWindow::startDiff);
    display1->display();
    display2->display();
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::startDiff()
{

    pythonInvoker::invokePredict(display1->getDisplayFile(),display2->getDisplayFile());
    QPixmap image(pythonInvoker::invokeDiff());
    result->setPixmap(image);

}
