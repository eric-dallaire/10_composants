#pragma once

#include "Mecanique.h"

class Transmission : public Mecanique
{
public:
    Transmission(int prix) : Mecanique(prix) {}
    string getDescription() override { return "Une transmission " + getMode(); }

protected:
    virtual string getMode() = 0;
};