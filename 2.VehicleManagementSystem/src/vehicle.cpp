#include "vehicle.h"   // include header file

Vehicle::Vehicle(string md, string bn, float ec, float fe, int ts) { // base class
    model = md;
    brandName = bn;
    engineCapacity = ec;
    fuelEfficiency = fe;
    topSpeed = ts;
}

void Vehicle::displayName() const { // function to display name of vehicles
    cout << "\nVehicle Model   : " << model << endl;
    cout << "Brand Name      : " << brandName << endl;
}

void Vehicle::displaySpecs() const { // function to display specifications of vehicles
    cout << "Engine Capacity : " << engineCapacity << " cc" << endl;
    cout << "Fuel Efficiency : " << fuelEfficiency << " km/L" << endl;
    cout << "Top Speed       : " << topSpeed << " km/hr" << endl;
}