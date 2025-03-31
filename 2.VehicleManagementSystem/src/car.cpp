#include "car.h"

Car::Car( string md, string bn, float ec, float fe, int ts, int doors) 
: Vehicle(md, bn, ec, fe ,ts) {// initializing attributes
    numberOfDoors = doors;
}

void Car::displayCarSpecs() const {
    displayName();          // reuse of functions to display
    displaySpecs();
    cout << "Number of Doors : " << numberOfDoors << endl;
}