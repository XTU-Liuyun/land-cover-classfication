/********************************************************************************
** Form generated from reading UI file 'qcombobox_tab.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCOMBOBOX_TAB_H
#define UI_QCOMBOBOX_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QComboBox_tab
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *QComboBox_tab)
    {
        if (QComboBox_tab->objectName().isEmpty())
            QComboBox_tab->setObjectName("QComboBox_tab");
        QComboBox_tab->resize(400, 38);
        QComboBox_tab->setMouseTracking(true);
        QComboBox_tab->setStyleSheet(QString::fromUtf8("QWidget:hover { background: none; }"));
        horizontalLayout = new QHBoxLayout(QComboBox_tab);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QComboBox_tab);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(false);

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(QComboBox_tab);
        pushButton->setObjectName("pushButton");
        QFont font1;
        font1.setPointSize(7);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;  /* \345\216\273\346\216\211\350\276\271\346\241\206 */\n"
"    background: transparent; /* \346\214\211\351\222\256\350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    icon-size: 14px;  /* \350\256\276\347\275\256\345\233\276\346\240\207\347\232\204\345\244\247\345\260\217 */\n"
"    padding: 5px;  /* \344\270\272\346\214\211\351\222\256\346\267\273\345\212\240\345\206\205\350\276\271\350\267\235 */\n"
"    icon: url(:/res/icon/ashbin.png); /* \351\273\230\350\256\244\345\233\276\346\240\207 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: transparent;  /* \346\202\254\345\201\234\346\227\266\346\214\211\351\222\256\350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    icon: url(:/res/icon/ashbin_choose.png);  /* \346\202\254\345\201\234\346\227\266\344\275\277\347\224\250\344\270\215\345\220\214\347\232\204\345\233\276\346\240\207 */\n"
"}\n"
""));
        pushButton->setIconSize(QSize(14, 14));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);


        retranslateUi(QComboBox_tab);

        QMetaObject::connectSlotsByName(QComboBox_tab);
    } // setupUi

    void retranslateUi(QWidget *QComboBox_tab)
    {
        QComboBox_tab->setWindowTitle(QCoreApplication::translate("QComboBox_tab", "Form", nullptr));
        label->setText(QCoreApplication::translate("QComboBox_tab", "TextLabel", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QComboBox_tab: public Ui_QComboBox_tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCOMBOBOX_TAB_H
