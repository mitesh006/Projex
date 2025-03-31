#pragma once

#include <iostream>
#include <string>
using namespace std;

class Vehicle { // base class
    protected :
    string model, brandName;
    float engineCapacity, fuelEfficiency;
    int topSpeed;

    public:
    Vehicle( string md, string bn, float ec, float fe, int ts);

    friend class Tester; // allowing Tester class to break encapsulation

    void displayName() const; // display name

    void displaySpecs() const; // display specs

};