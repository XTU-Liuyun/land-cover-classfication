#ifndef GRAPHICDISPLAY_H
#define GRAPHICDISPLAY_H

#include "qcombobox_tab.h"
#include <QFrame>
#include<QComboBox>
#include <qpushbutton.h>
#include<QListWidget>
#include<QVector>
namespace Ui {
class graphicDisplay;
}

class graphicDisplay : public QFrame
{
    Q_OBJECT

public:
    explicit graphicDisplay(QWidget *parent = nullptr);
    ~graphicDisplay();
    void display();
    void add(graphicDisplay*);
    QVector<QString>* filePaths;
    void add(QString,graphicDisplay*);
    Ui::graphicDisplay *ui;
    QComboBox* chooseBox;
    QLabel* imageLabel;
    QString getDisplayFile();
private:


    QPushButton* addpic;
    QListWidget* itemList;

    void addNewView(QString,QString);
};

#endif // GRAPHICDISPLAY_H
