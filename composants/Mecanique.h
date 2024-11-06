#pragma once

#include "Composant.h"

class Mecanique : public Composant
{
public:
    Mecanique(int prix = 0) : Composant(prix) {}
    string getDescription() override { return "Un composant mecanique"; }
    int getCodeInventaire() override { return 200; }
};