#ifndef NOTIFY_H
#define NOTIFY_H

#include <QWidget>

namespace Ui {
class Notify;
}

class Notify : public QWidget
{
    Q_OBJECT
    
public:
    explicit Notify(QWidget *parent = 0);
    ~Notify();
    
private:
    Ui::Notify *ui;
};

#endif // NOTIFY_H
