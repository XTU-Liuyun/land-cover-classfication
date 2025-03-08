/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <D:\my-land-cover-classfication\land-cover-classfication\dialog.h>
#include <D:\my-land-cover-classfication\land-cover-classfication\graphicdisplay.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
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
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButtonDetail;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonStart;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *resultImage;
    dialog *widget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuNew;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(875, 596);
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

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        pushButtonDetail = new QPushButton(centralwidget);
        pushButtonDetail->setObjectName("pushButtonDetail");
        sizePolicy.setHeightForWidth(pushButtonDetail->sizePolicy().hasHeightForWidth());
        pushButtonDetail->setSizePolicy(sizePolicy);
        pushButtonDetail->setMinimumSize(QSize(93, 28));

        verticalLayout_3->addWidget(pushButtonDetail);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        pushButtonStart = new QPushButton(centralwidget);
        pushButtonStart->setObjectName("pushButtonStart");
        sizePolicy.setHeightForWidth(pushButtonStart->sizePolicy().hasHeightForWidth());
        pushButtonStart->setSizePolicy(sizePolicy);
        pushButtonStart->setMinimumSize(QSize(93, 28));

        verticalLayout_3->addWidget(pushButtonStart);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        resultImage = new QLabel(centralwidget);
        resultImage->setObjectName("resultImage");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(resultImage->sizePolicy().hasHeightForWidth());
        resultImage->setSizePolicy(sizePolicy1);
        resultImage->setMinimumSize(QSize(389, 200));
        resultImage->setScaledContents(true);
        resultImage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(resultImage);

        widget = new dialog(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(33);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(widget);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 875, 25));
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
        pushButtonDetail->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\273\206\350\212\202", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        resultImage->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        menuNew->setTitle(QCoreApplication::translate("MainWindow", "\344\273\273\345\212\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
