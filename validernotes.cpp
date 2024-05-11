#include "validernotes.h"
#include "ui_validernotes.h"

validerNotes::validerNotes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::validerNotes)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/Noamane/Desktop/qtprjt/GestionDesNotesBD/gestionNotes.db");

    if(!database.open()){
        QMessageBox::information(this,"Not Open","DB Is Not Open ");
        return;
    }else{
        QMessageBox::information(this,"Open","DB was Open  ");
        querymodel=new QSqlQueryModel();
        querymodel->setQuery("SELECT studTable.NomEtud AS NomClient, "
               "studTable.PrenomEtud AS PrenomClient, "
                "reclamation.reclamation AS reclamation, "
               "reclamation.DateDeReclam AS DateDeReclamation "
               "FROM reclamation "
               "JOIN studTable ON reclamation.idClient = studTable.NumEtud;");
        ui->tableView->setModel(querymodel);
    }


}

validerNotes::~validerNotes()
{
    delete ui;
}
