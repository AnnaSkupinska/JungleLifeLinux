/********************************************************************************
** Form generated from reading UI file 'NewWorldDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWORLDDIALOG_H
#define UI_NEWWORLDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewWorldDialog
{
public:
    QPushButton *cancelButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPlants;
    QSpacerItem *horizontalSpacerPlants;
    QSlider *horizontalSliderPlants;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelHerbivores;
    QSpacerItem *horizontalSpacerHerbivores;
    QSlider *horizontalSliderHerbivores;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelPredators;
    QSpacerItem *horizontalSpacerPredators;
    QSlider *horizontalSliderPredators;

    void setupUi(QDialog *NewWorldDialog)
    {
        if (NewWorldDialog->objectName().isEmpty())
            NewWorldDialog->setObjectName(QStringLiteral("NewWorldDialog"));
        NewWorldDialog->resize(400, 300);
        cancelButton = new QPushButton(NewWorldDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(10, 260, 75, 23));
        pushButton_2 = new QPushButton(NewWorldDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 260, 75, 23));
        widget = new QWidget(NewWorldDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 70, 361, 131));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelPlants = new QLabel(widget);
        labelPlants->setObjectName(QStringLiteral("labelPlants"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelPlants->sizePolicy().hasHeightForWidth());
        labelPlants->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(labelPlants);

        horizontalSpacerPlants = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerPlants);

        horizontalSliderPlants = new QSlider(widget);
        horizontalSliderPlants->setObjectName(QStringLiteral("horizontalSliderPlants"));
        horizontalSliderPlants->setMaximum(30);
        horizontalSliderPlants->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderPlants);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelHerbivores = new QLabel(widget);
        labelHerbivores->setObjectName(QStringLiteral("labelHerbivores"));
        sizePolicy.setHeightForWidth(labelHerbivores->sizePolicy().hasHeightForWidth());
        labelHerbivores->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(labelHerbivores);

        horizontalSpacerHerbivores = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacerHerbivores);

        horizontalSliderHerbivores = new QSlider(widget);
        horizontalSliderHerbivores->setObjectName(QStringLiteral("horizontalSliderHerbivores"));
        horizontalSliderHerbivores->setMaximum(30);
        horizontalSliderHerbivores->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderHerbivores);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelPredators = new QLabel(widget);
        labelPredators->setObjectName(QStringLiteral("labelPredators"));
        sizePolicy.setHeightForWidth(labelPredators->sizePolicy().hasHeightForWidth());
        labelPredators->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(labelPredators);

        horizontalSpacerPredators = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacerPredators);

        horizontalSliderPredators = new QSlider(widget);
        horizontalSliderPredators->setObjectName(QStringLiteral("horizontalSliderPredators"));
        horizontalSliderPredators->setMaximum(30);
        horizontalSliderPredators->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderPredators);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(NewWorldDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), NewWorldDialog, SLOT(reject()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), NewWorldDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(NewWorldDialog);
    } // setupUi

    void retranslateUi(QDialog *NewWorldDialog)
    {
        NewWorldDialog->setWindowTitle(QApplication::translate("NewWorldDialog", "Create New World", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("NewWorldDialog", "Cancel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("NewWorldDialog", "Create", Q_NULLPTR));
        labelPlants->setText(QApplication::translate("NewWorldDialog", "Amount of Plants:           ", Q_NULLPTR));
        labelHerbivores->setText(QApplication::translate("NewWorldDialog", "Amount of Herbivores:   ", Q_NULLPTR));
        labelPredators->setText(QApplication::translate("NewWorldDialog", "Amount of Predators:     ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewWorldDialog: public Ui_NewWorldDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWORLDDIALOG_H
