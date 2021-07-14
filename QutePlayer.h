#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QutePlayer.h"

class QutePlayer : public QMainWindow
{
    Q_OBJECT

public:
    QutePlayer(QWidget *parent = Q_NULLPTR);

private:
    Ui::QutePlayerClass ui;

private slots:
    void Play();
};
