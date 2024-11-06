#pragma once

#include <iostream>
#include <list>

#include "Evaluable.h"

using namespace std;

class Evaluateur
{
private :
	list<Evaluable*> evaluables;
	void methodeDuMal(Evaluable* evaluable);

public:
	void ajouterEvaluable(Evaluable* evaluable) { evaluables.push_back(evaluable); }
	void evaluer();
};