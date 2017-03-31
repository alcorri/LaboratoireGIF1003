#include "employegui.h"
#include "EmployeCommission.h"
#include "Date.h"
#include "employecommissiondialog.h"

using namespace labo10;
using namespace util;

EmployeGUI::EmployeGUI(QWidget *parent) :
		QMainWindow(parent) {
	ui.setupUi(this);
	QObject::connect(ui.ajouterCommisBouton, SIGNAL(clicked()), this, SLOT(dialogCommis()));
}

EmployeGUI::~EmployeGUI() {

}

void EmployeGUI::dialogCommis() {
	EmployeCommissionDialog saisieCommis(this);
	if (saisieCommis.exec()) {
		EmployeCommission *temp = new EmployeCommission(saisieCommis.reqNom().toStdString(),
				saisieCommis.reqPrenom().toStdString(), saisieCommis.reqDateNaissance(), saisieCommis.reqSalaire(),
				saisieCommis.reqCommission(), saisieCommis.reqQuantite());
		m_entreprise.ajouterEmploye(temp);
	}
	ui.affichageEntrepriseTextEdit->setText(m_entreprise.reqEntrepriseFormate().c_str());
}
