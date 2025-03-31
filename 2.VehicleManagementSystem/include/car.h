#pragma once

#include "vehicle.h"


class Car : public Vehicle { // derived class from base class Vehicle
    private :
    int numberOfDoors;

    public :
    Car( string md, string bn, float ec, float fe, int ts, int doors);

    void displayCarSpecs() const; // display car specs

};