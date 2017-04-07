#ifndef DIALOGSUPPRIMEREMPLOYE_H
#define DIALOGSUPPRIMEREMPLOYE_H

#include <QtGui/QDialog>
#include "ui_dialogsupprimeremploye.h"

class DialogSupprimerEmploye: public QDialog {
	Q_OBJECT

public:
	DialogSupprimerEmploye(QWidget *parent = 0);
	~DialogSupprimerEmploye();

	QString reqNom() const;
	QString reqPrenom() const;

private slots:
	void validerFormulaire();

private:
	Ui::DialogSupprimerEmployeClass ui;
};

#endif // DIALOGSUPPRIMEREMPLOYE_H