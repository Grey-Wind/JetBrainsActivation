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

private slots:
    void on_CLion_clicked();

    void on_DataGrip_clicked();

    void on_GoLand_clicked();

    void on_IDEA_clicked();

    void on_PhpStorm_clicked();

    void on_PyCharm_clicked();

    void on_WebStorm_clicked();

private:
    Ui::JetBrainsActivation *ui;
};
#endif // JETBRAINSACTIVATION_H
