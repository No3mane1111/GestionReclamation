#include "clientpage.h"
#include "ui_clientpage.h"

ClientPage::ClientPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClientPage)
{
    ui->setupUi(this);
    ptrenvoyerreclam = new EnvoyerReclamation;
    ptrpageetudiants2 = new pageEtudiants2 ;
}

ClientPage::~ClientPage()
{
    delete ptrenvoyerreclam;
    delete ptrpageetudiants2;
    delete ui;
}

void ClientPage::on_reclamtionClient_clicked()
{
    ptrenvoyerreclam->show();
}


void ClientPage::on_reponseAdmin_clicked()
{
    ptrpageetudiants2->show();
}

