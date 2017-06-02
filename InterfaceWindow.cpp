#include "InterfaceWindow.h"
#include "ui_InterfaceWindow.h"
#include "NewWorldDialog.h"
#include "Spatial.h"

InterfaceWindow::InterfaceWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::InterfaceWindow)
{
  ui->setupUi(this);
  setFixedSize(800, 600);

}

InterfaceWindow::~InterfaceWindow()
{
  delete ui;
}

void InterfaceWindow::resizeEvent(QResizeEvent* event){
  QMainWindow::resizeEvent(event);
}

bool InterfaceWindow::eventFilter(QObject *watched, QEvent *event)
{
  return QMainWindow::eventFilter(watched, event);
}

void InterfaceWindow::on_pushButton_2_clicked()
{
  NewWorldDialog nwd;
  nwd.setModal(true);

  if(nwd.exec()==QDialog::Accepted){
    createNewSimulation(nwd.getPlants(),nwd.getHerbivores(),nwd.getPredators());
  }
}

void InterfaceWindow::createNewSimulation(int plants,int herbivores,int carnivores) {
  const int iterationsCount = 10;
  const int simulationStepPeriodMs = 500;
  simulation.reset(new Simulation(iterationsCount, plants, carnivores, herbivores, simulationStepPeriodMs));
  environment = simulation->getEnvironment().lock();

  ui->graphicsView->setScene(environment.get());
  ui->graphicsView->setRenderHint(QPainter::Antialiasing);
  ui->graphicsView->installEventFilter(this);

  simulation->start();
}

void InterfaceWindow::on_pauseButton_clicked()
{
  bool pause = false; //<- zamiastego daj zmienna mowiaca, czy jest pauza czy nie
  if(pause)
    ui->pauseButton->setText("Resume");
  else
    ui->pauseButton->setText("Stop");
}
