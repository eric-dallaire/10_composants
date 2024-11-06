#pragma once

#include "Transmission.h"

class Automatique : public Transmission
{
public:
    Automatique() : Transmission(2300) {}

protected:
    string getMode() override { return "automatique"; }
    int getCodeInventaire() override { return 201; }
};