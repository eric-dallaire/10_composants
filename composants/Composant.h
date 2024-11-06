#pragma once

#include <iostream>

#include "Evaluable.h"

using namespace std;

class Composant : public Evaluable
{
private:
	int prix;

public:
	Composant(int prix) : prix(prix) {}
	int getPrix() { return prix; }

	virtual string getDescription() = 0;
};