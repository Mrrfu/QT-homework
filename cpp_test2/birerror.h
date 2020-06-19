#ifndef BIRERROR_H
#define BIRERROR_H

#include <QDialog>

namespace Ui {
class birerror;
}

class birerror : public QDialog
{
    Q_OBJECT

public:
    explicit birerror(QWidget *parent = nullptr);
    ~birerror();

private slots:
    void on_pushButton_clicked();

private:
    Ui::birerror *ui;
};

#endif // BIRERROR_H
