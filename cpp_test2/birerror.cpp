#include "birerror.h"
#include "ui_birerror.h"

birerror::birerror(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::birerror)
{
    ui->setupUi(this);
    setWindowTitle("错误");
}

birerror::~birerror()
{
    delete ui;
}

void birerror::on_pushButton_clicked()
{
    close();
}
