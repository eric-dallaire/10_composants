#include "Evaluateur.h"
#include "Table.h"

void Evaluateur::evaluer()
{
	for (Evaluable* evaluable : evaluables)
	{
		cout << "Code " << evaluable->getCodeInventaire() << " / Prix : " << evaluable->getPrix() << "$"
			<< "(" << typeid(*evaluable).name() << ")" << endl;
		methodeDuMal(evaluable);
	}
}

void Evaluateur::methodeDuMal(Evaluable* evaluable)
{
	Table* t = dynamic_cast<Table*> (evaluable);
	if (t != nullptr)
		cout << "Dimension de la table (" << t->getLargeur() << "/" << t->getLongueur() << ")" << endl;
}
