#ifndef INTERFACEWINDOW_H
#define INTERFACEWINDOW_H

#include <memory>
#include <cmath>
#include "MyItem.h"
#include "Simulation.h"
#include "Environment.h"

namespace Ui {
class InterfaceWindow;
}

class InterfaceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InterfaceWindow(QWidget *parent = 0);
    ~InterfaceWindow();

  void createNewSimulation(int plants, int herbivores, int carnivores);

public slots:
    void resizeEvent(QResizeEvent* event);
    bool eventFilter(QObject *watched, QEvent *event);

private slots:
    void on_pushButton_2_clicked();
    void on_pauseButton_clicked();

private:
    Ui::InterfaceWindow *ui;

    std::unique_ptr<Simulation> simulation;
    std::shared_ptr<Environment> environment;
};


#endif // INTERFACEWINDOW_H
