/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QProgressBar *progressBar;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_16;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_14;
    QLabel *label_3;
    QLabel *label_13;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_15;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_11;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QVBoxLayout *layout;
    QLabel *label_17;
    QWidget *tab_2;
    QPushButton *pushButton_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_18;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1366, 799);
        MainWindow->setMinimumSize(QSize(920, 600));
        MainWindow->setMaximumSize(QSize(1500, 15500));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/images/allanimals.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        gridLayout_2->addWidget(progressBar, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_16, 1, 3, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_12, 2, 2, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_7, 0, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_9, 2, 1, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_14, 3, 3, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_13, 3, 2, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_8, 1, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_15 = new QLabel(widget);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_15, 2, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_10, 3, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"background:orange;\n"
"}"));

        gridLayout->addWidget(label_11, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        verticalLayout_3->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(100, 38));

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(50, 38));
        pushButton_2->setIconSize(QSize(30, 30));

        verticalLayout_3->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMinimumSize(QSize(700, 500));
        tabWidget->setMaximumSize(QSize(700, 700));
        tabWidget->setIconSize(QSize(110, 110));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        layout = new QVBoxLayout();
        layout->setObjectName("layout");
        label_17 = new QLabel(tab);
        label_17->setObjectName("label_17");

        layout->addWidget(label_17);


        gridLayout_4->addLayout(layout, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(200, 510, 271, 41));
        horizontalLayoutWidget = new QWidget(tab_2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(90, 410, 481, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(horizontalLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setCheckable(false);

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_7);

        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setEnabled(false);
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_5);

        label_20 = new QLabel(tab_2);
        label_20->setObjectName("label_20");
        label_20->setEnabled(false);
        label_20->setGeometry(QRect(160, 220, 131, 121));
        label_20->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 1px solid black;}"));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../gamefinish/resources/images/depositphotos_71499821-stock-photo-fun-cartoon-dog.jpg")));
        label_20->setScaledContents(true);
        label_21 = new QLabel(tab_2);
        label_21->setObjectName("label_21");
        label_21->setEnabled(false);
        label_21->setGeometry(QRect(270, 50, 121, 121));
        label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 1px solid black;}"));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../gamefinish/resources/images/depositphotos_13270628-stock-illustration-3d-cartoon-bird.jpg")));
        label_21->setScaledContents(true);
        label_22 = new QLabel(tab_2);
        label_22->setObjectName("label_22");
        label_22->setEnabled(false);
        label_22->setGeometry(QRect(460, 50, 121, 121));
        label_22->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 1px solid black;}"));
        label_22->setPixmap(QPixmap(QString::fromUtf8("../gamefinish/resources/images/depositphotos_37483085-stock-photo-fun-koala.jpg")));
        label_22->setScaledContents(true);
        label_18 = new QLabel(tab_2);
        label_18->setObjectName("label_18");
        label_18->setEnabled(false);
        label_18->setGeometry(QRect(370, 220, 131, 121));
        label_18->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 1px solid black;}"));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../gamefinish/resources/images/depositphotos_136889860-stock-photo-funny-cartoon-character.jpg")));
        label_18->setScaledContents(true);
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(80, 50, 111, 111));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/photo_2024-07-07_13-29-04.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(100, 100));
        tabWidget->addTab(tab_2, QString());
        pushButton_3->raise();
        pushButton_4->raise();
        horizontalLayoutWidget->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();
        label_18->raise();

        gridLayout_3->addWidget(tabWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1366, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Zoo", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\242\320\260\320\271\320\274\320\265\321\200:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Light", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Medium", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_18->setText(QString());
        pushButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
