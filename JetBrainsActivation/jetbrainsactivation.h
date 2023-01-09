#ifndef JETBRAINSACTIVATION_H
#define JETBRAINSACTIVATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class JetBrainsActivation; }
QT_END_NAMESPACE

class JetBrainsActivation : public QMainWindow
{
    Q_OBJECT

public:
    JetBrainsActivation(QWidget *parent = nullptr);
    ~JetBrainsActivation();

private:
    Ui::JetBrainsActivation *ui;
};
#endif // JETBRAINSACTIVATION_H
