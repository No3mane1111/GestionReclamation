#ifndef ENVOYERRECLAMATION_H
#define ENVOYERRECLAMATION_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlTableModel>
#include <QMessageBox>

namespace Ui {
class EnvoyerReclamation;
}

class EnvoyerReclamation : public QDialog
{
    Q_OBJECT

public:
    explicit EnvoyerReclamation(QWidget *parent = nullptr);
    ~EnvoyerReclamation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::EnvoyerReclamation *ui;
    QSqlDatabase database;
};

#endif // ENVOYERRECLAMATION_H
