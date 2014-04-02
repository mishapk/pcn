#ifndef MONITORING_H
#define MONITORING_H

#include <QWidget>

namespace Ui {
class Monitoring;
}

class Monitoring : public QWidget
{
    Q_OBJECT
    
public:
    explicit Monitoring(QWidget *parent = 0);
    ~Monitoring();
    
private:
    Ui::Monitoring *ui;
};

#endif // MONITORING_H
