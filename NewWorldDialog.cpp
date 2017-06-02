#include "NewWorldDialog.h"
#include "ui_NewWorldDialog.h"

NewWorldDialog::NewWorldDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewWorldDialog)
{
    ui->setupUi(this);
}

NewWorldDialog::~NewWorldDialog()
{
    delete ui;
}

int NewWorldDialog::getPlants(){
    return ui->horizontalSliderPlants->value();
}
int NewWorldDialog::getHerbivores(){
    return ui->horizontalSliderHerbivores->value();
}
int NewWorldDialog::getPredators(){
    return ui->horizontalSliderPredators->value();
}
void NewWorldDialog::on_horizontalSlider_sliderMoved(int position)
{
    QString amount = QString::number(position,10);
    ui->labelPlants->setText("Amount of Plants:"+amount);
}

void NewWorldDialog::on_horizontalSliderPlants_sliderMoved(int position)
{
    QString amount = QString::number(position,10);
    ui->labelPlants->setText("Amount of Plants:"+amount);
}

void NewWorldDialog::on_horizontalSliderHerbivores_sliderMoved(int position)
{
    QString amount = QString::number(position,10);
    ui->labelHerbivores->setText("Amount of Herbivores:"+amount);
}

void NewWorldDialog::on_horizontalSliderPredators_sliderMoved(int position)
{
    QString amount = QString::number(position,10);
    ui->labelPredators->setText("Amount of Predators:"+amount);
}
