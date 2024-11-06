#pragma once

#include "Composant.h"

class Electronique : public Composant
{
private:
    bool reparable;

public:
    Electronique(int prix, bool reparable = false) : Composant(prix) { this->reparable = reparable; }
};

