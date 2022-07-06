#ifndef LEARNINGSECTION_H
#define LEARNINGSECTION_H

#include <QMainWindow>
#include <QTextEdit>

namespace Ui {
class learningSection;
}

class learningSection : public QMainWindow
{
    Q_OBJECT

public:
    explicit learningSection(QWidget *parent = nullptr);
    ~learningSection();

private:
    Ui::learningSection *ui;
   };

#endif // LEARNINGSECTION_H
