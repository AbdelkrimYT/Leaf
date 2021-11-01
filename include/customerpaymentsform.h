#ifndef CUSTOMERPAYMENTSFORM_H
#define CUSTOMERPAYMENTSFORM_H

#include "custommodels.h"
#include "customdelegates.h"

#include <QWidget>

namespace Ui {
class CustomerPaymentsForm;
}

class CustomerPaymentsForm : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerPaymentsForm(QWidget *parent = nullptr);
    ~CustomerPaymentsForm();

private:
    Ui::CustomerPaymentsForm *ui;
};

#endif // CUSTOMERPAYMENTSFORM_H