#include <iostream>
#include <list>

#include "Composant.h"
#include "Electronique.h"
#include "TableauBord.h"
#include "Mecanique.h"
#include "Moteur.h"
#include "Transmission.h"
#include "Manuelle.h"
#include "Automatique.h"
#include "Evaluateur.h"
#include "Table.h"
#include "Robot.h"

using namespace std;

void calcul(list<Composant*>& mesComposants);

int main()
{
	// *** Inistialisation des variables de l'exercice ***
	list<Composant*> mesComposants;
	Evaluateur evaluateur;

	mesComposants.push_back(new TableauBord());
	mesComposants.push_back(new Mecanique());
	mesComposants.push_back(new Moteur());
	mesComposants.push_back(new Manuelle());
	mesComposants.push_back(new Automatique());
	//mesComposants.push_back(new Composant());
	//mesComposants.push_back(new Electronique());
	//mesComposants.push_back(new Transmission());

	// *** Affichage des composants et abonnement � l'�valuateur ***
	for (Composant* composant : mesComposants)
	{
		cout << composant->getDescription() << "/" << composant->getPrix() << endl;
		evaluateur.ajouterEvaluable(composant);
	}

	// *** Abonnement d'objets divers � l'�valuateur ***
	evaluateur.ajouterEvaluable(new Table(20, 30, 50));
	evaluateur.ajouterEvaluable(new Robot());

	// �valuation des �valuables
	evaluateur.evaluer();

	calcul(mesComposants);

	// Fin de programme sans erreur
	return 0;
}

void calcul(list<Composant*>& mesComposants)
{
	// COMPL�TER LE CODE ICI
}
