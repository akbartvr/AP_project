#ifndef DOCTORS_H
#define DOCTORS_H

#include <QMainWindow>

namespace Ui {
class doctors;
}

class doctors : public QMainWindow
{
    Q_OBJECT

public:
    explicit doctors(QWidget *parent = nullptr);
    ~doctors();

private slots:
    void on_introPB_clicked();

    void on_schedulePB_clicked();

private:
    Ui::doctors *ui;
    QMainWindow*ptr; //used for polymorphism
};

#endif // DOCTORS_H
