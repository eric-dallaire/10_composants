#pragma once

#include "Evaluable.h"

class Table : public Evaluable
{
private:
    int largeur;
    int longueur;
    int poids;

public:
    Table(int largeur, int longueur, int poids) : largeur(largeur), longueur(longueur), poids(poids) {}
    int getLargeur() const { return largeur; }
    int getLongueur() const { return longueur; }
    int getPoids() const { return poids; }
    int getPrix() { return 25; }
    int getCodeInventaire() { return 999; }
};