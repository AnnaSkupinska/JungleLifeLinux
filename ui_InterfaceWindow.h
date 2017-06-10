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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfaceWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *World;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *labelAllPlants;
    QLabel *label_5;
    QLabel *labelAllHerbivores;
    QLabel *label_6;
    QLabel *labelAllCarnivores;
    QSpacerItem *verticalSpacer;
    QPushButton *pauseButton;
    QWidget *tab_2;
    QLabel *label_2;
    QWidget *layoutWidget;
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
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
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
        verticalLayout_4 = new QVBoxLayout(World);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(World);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        pushButton_2 = new QPushButton(World);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(0, 0));
        pushButton_2->setBaseSize(QSize(150, 0));

        verticalLayout_2->addWidget(pushButton_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(World);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        labelAllPlants = new QLabel(World);
        labelAllPlants->setObjectName(QStringLiteral("labelAllPlants"));

        gridLayout->addWidget(labelAllPlants, 0, 1, 1, 1);

        label_5 = new QLabel(World);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        labelAllHerbivores = new QLabel(World);
        labelAllHerbivores->setObjectName(QStringLiteral("labelAllHerbivores"));

        gridLayout->addWidget(labelAllHerbivores, 1, 1, 1, 1);

        label_6 = new QLabel(World);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        labelAllCarnivores = new QLabel(World);
        labelAllCarnivores->setObjectName(QStringLiteral("labelAllCarnivores"));

        gridLayout->addWidget(labelAllCarnivores, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        pauseButton = new QPushButton(World);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));

        verticalLayout_4->addWidget(pauseButton);

        tabWidget->addTab(World, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 181, 41));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 171, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        xDescription = new QLabel(layoutWidget);
        xDescription->setObjectName(QStringLiteral("xDescription"));

        horizontalLayout_3->addWidget(xDescription);

        xParameter = new QLabel(layoutWidget);
        xParameter->setObjectName(QStringLiteral("xParameter"));

        horizontalLayout_3->addWidget(xParameter);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        yDescription = new QLabel(layoutWidget);
        yDescription->setObjectName(QStringLiteral("yDescription"));

        horizontalLayout_4->addWidget(yDescription);

        yParameter = new QLabel(layoutWidget);
        yParameter->setObjectName(QStringLiteral("yParameter"));

        horizontalLayout_4->addWidget(yParameter);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout->addWidget(graphicsView);


        verticalLayout_3->addLayout(horizontalLayout);

        InterfaceWindow->setCentralWidget(centralWidget);

        retranslateUi(InterfaceWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InterfaceWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InterfaceWindow)
    {
        InterfaceWindow->setWindowTitle(QApplication::translate("InterfaceWindow", "InterfaceWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("InterfaceWindow", "World Information", Q_NULLPTR));
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
