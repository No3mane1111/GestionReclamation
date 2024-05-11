#ifndef CLIENTPAGE_H
#define CLIENTPAGE_H


#include <QDialog>
#include"envoyerreclamation.h"
#include"pageetudiants2.h"

namespace Ui {
class ClientPage;
}

class ClientPage : public QDialog
{
    Q_OBJECT

public:
    explicit ClientPage(QWidget *parent = nullptr);
    ~ClientPage();

private slots:
    void on_reclamtionClient_clicked();

    void on_reponseAdmin_clicked();

private:
    Ui::ClientPage *ui;
    EnvoyerReclamation* ptrenvoyerreclam;
    pageEtudiants2* ptrpageetudiants2;
};

#endif // CLIENTPAGE_H
