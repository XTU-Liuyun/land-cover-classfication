#include "qcombobox_tab.h"
#include "ui_qcombobox_tab.h"
#include <QPushButton>
QComboBox_tab::QComboBox_tab(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QComboBox_tab)
{
    ui->setupUi(this);
    label=ui->label;
    btn=ui->pushButton;

}
QComboBox_tab::~QComboBox_tab()
{
    delete ui;
}
