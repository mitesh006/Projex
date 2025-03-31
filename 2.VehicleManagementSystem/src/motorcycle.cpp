#include "motorcycle.h"

Motorcycle::Motorcycle( string md, string bn, float ec, float fe, int ts, bool sideCars) 
: Vehicle(md, bn, ec, fe ,ts) {// initializing attributes
    hasSidecars = sideCars;
}

void Motorcycle::displayBikeSpecs() const {
    displayName();          // reuse of functions to display
    displaySpecs();
    cout << "Has side car    : " << (hasSidecars ? "Yes" : "No" ) << endl;
}