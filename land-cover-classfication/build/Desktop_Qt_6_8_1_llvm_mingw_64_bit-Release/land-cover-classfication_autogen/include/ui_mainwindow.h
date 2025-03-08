/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <D:\my-land-cover-classfication\land-cover-classfication\graphicdisplay.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSingleTask;
    QAction *action_muti_task;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    graphicDisplay *frame;
    graphicDisplay *frame_2;
    QFormLayout *formLayout;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuNew;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(851, 594);
        actionSingleTask = new QAction(MainWindow);
        actionSingleTask->setObjectName("actionSingleTask");
        actionSingleTask->setVisible(true);
        actionSingleTask->setIconVisibleInMenu(false);
        action_muti_task = new QAction(MainWindow);
        action_muti_task->setObjectName("action_muti_task");
        action_muti_task->setIconVisibleInMenu(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        frame = new graphicDisplay(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(351, 270));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout->addWidget(frame);

        frame_2 = new graphicDisplay(centralwidget);
        frame_2->setObjectName("frame_2");
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(351, 270));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout->addWidget(frame_2);


        horizontalLayout->addLayout(verticalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(93);
        sizePolicy1.setVerticalStretch(28);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        formLayout->setItem(2, QFormLayout::LabelRole, verticalSpacer);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer_2);


        horizontalLayout->addLayout(formLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 851, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menuNew = new QMenu(menu);
        menuNew->setObjectName("menuNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icon/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        menuNew->setIcon(icon);
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(menuNew->menuAction());
        menu->addSeparator();
        menuNew->addAction(actionSingleTask);
        menuNew->addAction(action_muti_task);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSingleTask->setText(QCoreApplication::translate("MainWindow", "\344\270\200\344\270\252\344\273\273\345\212\241(Ctrl+N)", nullptr));
        action_muti_task->setText(QCoreApplication::translate("MainWindow", "\344\270\200\347\273\204\344\273\273\345\212\241(Ctrl+M)", nullptr));
        action_muti_task->setIconText(QCoreApplication::translate("MainWindow", "\344\270\200\347\273\204\344\273\273\345\212\241(Ctrl+M)", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\273\206\350\212\202", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        menuNew->setTitle(QCoreApplication::translate("MainWindow", "\344\273\273\345\212\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
