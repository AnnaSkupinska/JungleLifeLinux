#ifndef NEWWORLDDIALOG_H
#define NEWWORLDDIALOG_H

#include <QDialog>
#include <string.h>

namespace Ui {
class NewWorldDialog;
}

class NewWorldDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewWorldDialog(QWidget *parent = 0);
    ~NewWorldDialog();
    int getPlants();
    int getHerbivores();
    int getPredators();
private slots:
    void on_horizontalSlider_sliderMoved(int position);

    void on_horizontalSliderPlants_sliderMoved(int position);

    void on_horizontalSliderHerbivores_sliderMoved(int position);

    void on_horizontalSliderPredators_sliderMoved(int position);

private:
    Ui::NewWorldDialog *ui;
};

#endif // NEWWORLDDIALOG_H
