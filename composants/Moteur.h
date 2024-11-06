#pragma once

#include "Mecanique.h"

class Moteur : public Mecanique
{
public:
    Moteur() : Mecanique(3000) {}
    string getDescription() override { return "Un moteur"; }
    int getCodeInventaire() override { return 201; }
};

