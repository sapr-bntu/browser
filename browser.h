#ifndef BROWSER_H
#define BROWSER_H

#include <QMainWindow>

namespace Ui {
    class browser;
}

class browser : public QMainWindow
{
    Q_OBJECT

public:
    explicit browser(QWidget *parent = 0);
    ~browser();

private:
    Ui::browser *ui;
};

#endif // BROWSER_H
