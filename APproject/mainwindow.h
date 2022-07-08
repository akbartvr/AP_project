#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();
public slots:



private slots:
    void on_loginPB_clicked();

    void on_registerPB_clicked();

    void on_doctorsPB_clicked();

private:
    Ui::mainwindow *ui;
    QMainWindow * qMainWindowPtr; //used for polymorphism in all derived mainwindow classes
    QDialog* qDialogPtr; //used for polymorphism in all derived dialog classes
};
#endif // MAINWINDOW_H
