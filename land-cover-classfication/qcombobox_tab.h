#ifndef QCOMBOBOX_TAB_H
#define QCOMBOBOX_TAB_H

#include <QWidget>
#include <qlabel.h>
#include <qpushbutton.h>

namespace Ui {
class QComboBox_tab;
}

class QComboBox_tab : public QWidget
{
    Q_OBJECT

public:
    explicit QComboBox_tab(QWidget *parent = nullptr);
    ~QComboBox_tab();
    QLabel* label;
    QPushButton* btn;
private:
    Ui::QComboBox_tab *ui;
};

#endif // QCOMBOBOX_TAB_H
