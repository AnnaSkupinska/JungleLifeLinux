/********************************************************************************
** Form generated from reading UI file 'InterfaceWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACEWINDOW_H
#define UI_INTERFACEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfaceWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *World;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *labelAllPlants;
    QLabel *label_5;
    QLabel *labelAllHerbivores;
    QLabel *label_6;
    QLabel *labelAllCarnivores;
    QPushButton *pauseButton;
    QWidget *tab_2;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *xDescription;
    QLabel *xParameter;
    QHBoxLayout *horizontalLayout_4;
    QLabel *yDescription;
    QLabel *yParameter;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *InterfaceWindow)
    {
        if (InterfaceWindow->objectName().isEmpty())
            InterfaceWindow->setObjectName(QStringLiteral("InterfaceWindow"));
        InterfaceWindow->resize(434, 400);
        InterfaceWindow->setMinimumSize(QSize(400, 400));
        centralWidget = new QWidget(InterfaceWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(400, 400));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(200, 0));
        World = new QWidget();
        World->setObjectName(QStringLiteral("World"));
        label_3 = new QLabel(World);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 30, 171, 41));
        pushButton_2 = new QPushButton(World);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 70, 111, 23));
        layoutWidget = new QWidget(World);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 110, 171, 71));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        labelAllPlants = new QLabel(layoutWidget);
        labelAllPlants->setObjectName(QStringLiteral("labelAllPlants"));

        gridLayout->addWidget(labelAllPlants, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        labelAllHerbivores = new QLabel(layoutWidget);
        labelAllHerbivores->setObjectName(QStringLiteral("labelAllHerbivores"));

        gridLayout->addWidget(labelAllHerbivores, 1, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        labelAllCarnivores = new QLabel(layoutWidget);
        labelAllCarnivores->setObjectName(QStringLiteral("labelAllCarnivores"));

        gridLayout->addWidget(labelAllCarnivores, 2, 1, 1, 1);

        pauseButton = new QPushButton(World);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setGeometry(QRect(10, 320, 171, 23));
        tabWidget->addTab(World, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 181, 41));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 70, 171, 81));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        xDescription = new QLabel(layoutWidget1);
        xDescription->setObjectName(QStringLiteral("xDescription"));

        horizontalLayout_3->addWidget(xDescription);

        xParameter = new QLabel(layoutWidget1);
        xParameter->setObjectName(QStringLiteral("xParameter"));

        horizontalLayout_3->addWidget(xParameter);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        yDescription = new QLabel(layoutWidget1);
        yDescription->setObjectName(QStringLiteral("yDescription"));

        horizontalLayout_4->addWidget(yDescription);

        yParameter = new QLabel(layoutWidget1);
        yParameter->setObjectName(QStringLiteral("yParameter"));

        horizontalLayout_4->addWidget(yParameter);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout->addWidget(graphicsView);


        horizontalLayout_2->addLayout(horizontalLayout);

        InterfaceWindow->setCentralWidget(centralWidget);

        retranslateUi(InterfaceWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(InterfaceWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InterfaceWindow)
    {
        InterfaceWindow->setWindowTitle(QApplication::translate("InterfaceWindow", "InterfaceWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("InterfaceWindow", "Information about the world", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("InterfaceWindow", "Create New World", Q_NULLPTR));
        label_4->setText(QApplication::translate("InterfaceWindow", "Plants", Q_NULLPTR));
        labelAllPlants->setText(QApplication::translate("InterfaceWindow", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("InterfaceWindow", "Herbivores", Q_NULLPTR));
        labelAllHerbivores->setText(QApplication::translate("InterfaceWindow", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("InterfaceWindow", "Predators", Q_NULLPTR));
        labelAllCarnivores->setText(QApplication::translate("InterfaceWindow", "0", Q_NULLPTR));
        pauseButton->setText(QApplication::translate("InterfaceWindow", "Stop", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(World), QApplication::translate("InterfaceWindow", "World", Q_NULLPTR));
        label_2->setText(QApplication::translate("InterfaceWindow", "Information about selected creature", Q_NULLPTR));
        xDescription->setText(QApplication::translate("InterfaceWindow", "X:", Q_NULLPTR));
        xParameter->setText(QApplication::translate("InterfaceWindow", "0", Q_NULLPTR));
        yDescription->setText(QApplication::translate("InterfaceWindow", "Y:", Q_NULLPTR));
        yParameter->setText(QApplication::translate("InterfaceWindow", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("InterfaceWindow", "Creature", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InterfaceWindow: public Ui_InterfaceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACEWINDOW_H
