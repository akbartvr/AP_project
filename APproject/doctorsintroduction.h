#ifndef DOCTORSINTRODUCTION_H
#define DOCTORSINTRODUCTION_H

#include <QMainWindow>

namespace Ui {
class doctorsIntroduction;
}

class doctorsIntroduction : public QMainWindow
{
    Q_OBJECT

public:
    explicit doctorsIntroduction(QWidget *parent = nullptr);
    ~doctorsIntroduction();

private:
    Ui::doctorsIntroduction *ui;
};

#endif // DOCTORSINTRODUCTION_H
