#include "dialog.h"
#include "ui_dialog.h"

dialog::dialog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::dialog)
{
    ui->setupUi(this);
    msgDialog=ui->textBrowser;
    for(int i=1;i<=30;i++)
    {
        msgDialog->insertPlainText(QString("第%1行\n").arg(i));
    }
}

dialog::~dialog()
{
    delete ui;
}
