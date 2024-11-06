#pragma once

#include "Electronique.h"

class TableauBord : public Electronique
{
public:
    TableauBord() : Electronique(1000, false) {}
    string getDescription() override { return "Un tableau de bord"; }
    int getCodeInventaire() override { return 100; }
};