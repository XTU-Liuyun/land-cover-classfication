#include "graphicdisplay.h"
#include "ui_graphicdisplay.h"
#include "qcombobox_tab.h"
#include"mainwindow.h"
#include <QString>
#include<QFile>
#include<QComboBox>
#include<QFileDialog>
#include<QLabel>
#include<QDebug>
#include <QStyledItemDelegate>
#include <QPainter>
#include<QListWidget>
#include<QHBoxLayout>
#include"tool.h"
graphicDisplay::graphicDisplay(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::graphicDisplay)
{
    ui->setupUi(this);
    addpic = ui->Add;
    chooseBox = ui->chooseBox;
    imageLabel=ui->imageLabel;
    filePaths=new QVector<QString>();
    itemList = new QListWidget();
    chooseBox->setModel(itemList->model());
    chooseBox->setView(itemList);
    connect(addpic, &QPushButton::clicked, this, [=]() { add(this); });
}
graphicDisplay::~graphicDisplay()
{
    delete ui;
}
void graphicDisplay::add(graphicDisplay* Box)
{
    QString fileName = QFileDialog::getOpenFileName(this, "请选择图片", "D:/", "图片(*.png *.jpg)");
    QString realName;
    if (fileName == "") return;
    realName = QFileInfo(fileName).fileName();
    if(chooseBox->findText(realName) != -1) return;
    chooseBox->setCurrentText(realName);

    addNewView(realName, fileName);
    if (graphicDisplay::filePaths->indexOf(fileName) == -1)
    {
        graphicDisplay::filePaths->push_back(fileName);
    }
    display();
    tool::saveImageToJson(fileName, Box);
}

void graphicDisplay::add(QString fileName,graphicDisplay* Box)
{
    QString realName;
    if (fileName == "") return;
    realName = QFileInfo(fileName).fileName();
    if(Box->chooseBox->findText(realName)!=-1)return;
    Box->chooseBox->setCurrentText(realName);
    addNewView(realName,fileName);
    if(graphicDisplay::filePaths->indexOf(fileName)==-1)
    {
        graphicDisplay::filePaths->push_back(fileName);
        qDebug()<<"存入";
    }
    tool::saveImageToJson(fileName,Box);
}
void graphicDisplay::addNewView(QString name,QString fileName)
{
    disconnect(chooseBox, &QComboBox::currentIndexChanged, this, &graphicDisplay::display);
    QListWidgetItem* itemWrap = new QListWidgetItem(itemList);
    QComboBox_tab* itemWidget = new QComboBox_tab();
    itemWrap->setData(Qt::DisplayRole, name);
    itemWidget->label->setText(name);
    itemList->setItemWidget(itemWrap, itemWidget);
    connect(chooseBox, &QComboBox::currentIndexChanged, this, &graphicDisplay::display);
    connect(itemWidget->btn, &QPushButton::clicked, this, [=]()
    {
        chooseBox->hidePopup();
        int row = itemList->row(itemWrap);
        if (row >= 0)
        {
            QListWidgetItem* removedItem = itemList->takeItem(row);
            delete removedItem;
        }
        delete itemWidget;
        qDebug() << "删除文件:" << fileName;
        tool::removeJson(fileName, this);
        filePaths->removeAll(fileName);
        display();
    });
}
void graphicDisplay::display()
{
    int selectIndex = chooseBox->currentIndex();
    if(selectIndex==-1)
    {
        imageLabel->setPixmap(QPixmap());
        return;
    }
    qDebug()<<chooseBox->currentText();
    qDebug()<<"该栏选中index为"<<selectIndex<<" 显示图片为"<<filePaths->at(selectIndex);
    QString filePath=filePaths->at(selectIndex);
    QPixmap pixmap(filePath);
    if (!pixmap.isNull())
    {
        imageLabel->setPixmap(pixmap);
        imageLabel->setScaledContents(true);
    }
}
QString graphicDisplay::getDisplayFile()
{
    int selectIndex = chooseBox->currentIndex();
    if(selectIndex==-1)
    {
        return "";
    }
    return filePaths->at(selectIndex);
}


