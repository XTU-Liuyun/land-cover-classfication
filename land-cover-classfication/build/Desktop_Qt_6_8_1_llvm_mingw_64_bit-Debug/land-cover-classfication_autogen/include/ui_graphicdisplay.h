/********************************************************************************
** Form generated from reading UI file 'graphicdisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICDISPLAY_H
#define UI_GRAPHICDISPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_graphicDisplay
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *chooseBox;
    QPushButton *Add;
    QLabel *imageLabel;

    void setupUi(QFrame *graphicDisplay)
    {
        if (graphicDisplay->objectName().isEmpty())
            graphicDisplay->setObjectName("graphicDisplay");
        graphicDisplay->setWindowModality(Qt::WindowModality::NonModal);
        graphicDisplay->setEnabled(true);
        graphicDisplay->resize(374, 341);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicDisplay->sizePolicy().hasHeightForWidth());
        graphicDisplay->setSizePolicy(sizePolicy);
        graphicDisplay->setStyleSheet(QString::fromUtf8(""));
        graphicDisplay->setFrameShape(QFrame::Shape::NoFrame);
        verticalLayout_2 = new QVBoxLayout(graphicDisplay);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName("horizontalLayout");
        chooseBox = new QComboBox(graphicDisplay);
        chooseBox->addItem(QString());
        chooseBox->setObjectName("chooseBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chooseBox->sizePolicy().hasHeightForWidth());
        chooseBox->setSizePolicy(sizePolicy1);
        chooseBox->setMinimumSize(QSize(291, 25));
        chooseBox->setEditable(false);

        horizontalLayout->addWidget(chooseBox);

        Add = new QPushButton(graphicDisplay);
        Add->setObjectName("Add");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy2);
        Add->setMinimumSize(QSize(31, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icon/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Add->setIcon(icon);

        horizontalLayout->addWidget(Add);


        verticalLayout->addLayout(horizontalLayout);

        imageLabel = new QLabel(graphicDisplay);
        imageLabel->setObjectName("imageLabel");
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        imageLabel->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(imageLabel);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(graphicDisplay);

        QMetaObject::connectSlotsByName(graphicDisplay);
    } // setupUi

    void retranslateUi(QFrame *graphicDisplay)
    {
        graphicDisplay->setWindowTitle(QCoreApplication::translate("graphicDisplay", "Frame", nullptr));
        chooseBox->setItemText(0, QCoreApplication::translate("graphicDisplay", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));

        Add->setText(QString());
        imageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class graphicDisplay: public Ui_graphicDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICDISPLAY_H
