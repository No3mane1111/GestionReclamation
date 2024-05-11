#include "envoyerreclamation.h"
#include "ui_envoyerreclamation.h"

EnvoyerReclamation::EnvoyerReclamation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EnvoyerReclamation)
{
    ui->setupUi(this);
}

EnvoyerReclamation::~EnvoyerReclamation()
{
    delete ui;
}


void EnvoyerReclamation::on_pushButton_clicked()
{
    QString IdClient = ui->IdClient->text();
    QString Reclam = ui->ReclamClient->text();
    QString Date = ui->DateReclam->text();

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/Noamane/Desktop/qtprjt/GestionDesNotesBD/gestionNotes.db");

    if(!database.open()){
        QMessageBox::information(this,"Not Open","DB Is Not Open ");
        return;
    }else{
        QMessageBox::information(this,"Open","DB was Open  ");
    }

    QSqlQuery query(database);
    query.prepare("INSERT INTO reclamation (reclamation,idClient,DateDeReclam)VALUES('" + Reclam + "','" + IdClient + "','" + Date + "')");


    if (query.exec()) {
        QMessageBox::information(this,"INSERTED","Data inserted Successfully");
    } else {
        QMessageBox::information(this,"Not INSERTED","Data Is Not inserted ");
}

}
