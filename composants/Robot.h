#pragma once

#include "Evaluable.h"

class Robot : public Evaluable
{
public:
    int getPrix() { return 100000; }
    int getCodeInventaire() { return 777; }
};

