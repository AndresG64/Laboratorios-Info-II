#ifndef PELOTA_H
#define PELOTA_H

#include <QWidget>

namespace Ui {
class pelota;
}

class pelota : public QWidget
{
    Q_OBJECT

public:
    explicit pelota(QWidget *parent = nullptr);
    ~pelota();

private:
    Ui::pelota *ui;
};

#endif // PELOTA_H
