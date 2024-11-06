#pragma once

#include "Transmission.h"

class Manuelle : public Transmission
{
public:
    Manuelle() : Transmission(2500) {}

protected:
    string getMode() override { return "manuelle"; }
    int getCodeInventaire() override { return 202; }
};