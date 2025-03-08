#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include <QTextBrowser>
namespace Ui {
class dialog;
}

class dialog : public QWidget
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = nullptr);
    ~dialog();

private:
    Ui::dialog *ui;
    QTextBrowser *msgDialog;
};

#endif // DIALOG_H
