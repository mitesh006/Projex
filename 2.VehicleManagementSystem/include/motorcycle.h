#pragma once

#include "vehicle.h"

class Motorcycle : public Vehicle { // derived class from base class Vehicle
    private :
    bool hasSidecars;

    public :
    Motorcycle( string md, string bn, float ec, float fe, int ts, bool sideCars);

    void displayBikeSpecs() const; //display bike specs

};