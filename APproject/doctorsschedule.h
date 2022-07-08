#ifndef DOCTORSSCHEDULE_H
#define DOCTORSSCHEDULE_H

#include <QMainWindow>

namespace Ui {
class doctorsSchedule;
}

class doctorsSchedule : public QMainWindow
{
    Q_OBJECT

public:
    explicit doctorsSchedule(QWidget *parent = nullptr);
    ~doctorsSchedule();

private:
    Ui::doctorsSchedule *ui;
};

#endif // DOCTORSSCHEDULE_H
