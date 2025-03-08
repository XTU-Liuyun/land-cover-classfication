/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName("dialog");
        dialog->resize(371, 233);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dialog->sizePolicy().hasHeightForWidth());
        dialog->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(dialog);
        horizontalLayout->setObjectName("horizontalLayout");
        textBrowser = new QTextBrowser(dialog);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setFrameShape(QFrame::Shape::StyledPanel);
        textBrowser->setFrameShadow(QFrame::Shadow::Sunken);
        textBrowser->setLineWidth(1);

        horizontalLayout->addWidget(textBrowser);


        retranslateUi(dialog);

        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QWidget *dialog)
    {
        dialog->setWindowTitle(QCoreApplication::translate("dialog", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
