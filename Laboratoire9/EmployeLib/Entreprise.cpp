/**
 * \file Entreprise.cpp
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-03-29
 */

#include "Entreprise.h"
#include <sstream>

using namespace std;

namespace labo10 {

Entreprise::Entreprise() :
		m_employes(vector<Employe*>()) {
}

Entreprise::~Entreprise() {
	for (size_t i = 0; i < m_employes.size(); i++) {
		delete m_employes[i];
	}
	m_employes.clear();
}

void Entreprise::ajouterEmploye(Employe* employe) {
	m_employes.push_back(employe);
}

string Entreprise::reqEntrepriseFormate() const {
	ostringstream os;

	for (size_t i = 0; i < m_employes.size(); i++) {
		os << m_employes[i]->reqEmployeFormate() << endl;
		os << "------------------" << endl;
	}

	return os.str();
}

} /* namespace labo10 */
