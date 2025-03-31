#include <iostream>
#include <vector>
//include header files
#include "car.h"
#include "motorcycle.h"
#include "tester.h"

using namespace std;

int main() {

    vector <Car> carList; // VEctors to store dynamically added vehicles
    vector <Motorcycle> bikeList; 

    Tester tester; //object of friend class Tester - tester
    
    
    int choice;

    while (1) {
        cout << "\n====== Vehicle Management System ======\n";  //User Interface
        cout << "1. Add New Vehicle (Car or Motorcycle)\n";
        cout << "2. View Car Specifications\n";
        cout << "3. View Motorcycle Specifications\n";
        cout << "4. Test Car Performance\n";
        cout << "5. Test Motorcycle Performance\n";
        cout << "6. Exit\n";
        cout << "========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {   //menu created using while loop and switch case

            case 1: 
            int vehicleType;
            cout << "\nAdd New Vehicle:\n";  //A choice to add car or bike
            cout << "1. Car\n";
            cout << "2. Motorcycle\n";
            cout << "Enter your choice: ";
            cin >> vehicleType;
            
            if (vehicleType == 1) {
                string md, bn;
                float ec, fe;
                int ts, doors;
                cout << "\nEnter Vehicle Model : ";   // inputing data of vehicles
                cin.ignore();
                getline(cin,md);
                cout << "Enter Brand Name : ";
                getline(cin,bn);
                cout << "Enter Engine Capacity (cc): ";
                cin >> ec;
                cout << "Enter Fuel Efficiency (km/L): ";
                cin >> fe;
                cout << "Enter Top Speed (km/hr): ";
                cin >> ts;
                cout << "Enter Number of Doors: ";
                cin >> doors;
                    
               
                carList.emplace_back(md, bn, ec, fe, ts, doors);          // Create and store new Car
                cout << "\nNew Car added successfully!" << endl;
            } 
            else if (vehicleType == 2) {
                string md, bn;
                float ec, fe;
                int ts;
                bool sidecar;
                cout << "\nEnter Vehicle Model : ";
                cin.ignore();
                getline(cin,md);
                cout << "Enter Brand Name : ";              // inputing data of vehicles
                getline(cin,bn);
                cout << "Enter Engine Capacity (cc): ";
                cin >> ec;
                cout << "Enter Fuel Efficiency (km/L): ";
                cin >> fe;
                cout << "Enter Top Speed (km/hr): ";
                cin >> ts;
                cout << "Does it have a sidecar? (1 for Yes, 0 for No): ";
                cin >> sidecar;
            
                bikeList.emplace_back(md, bn, ec, fe, ts, sidecar);     // Create and store new Motorcycle
                cout << "\nNew Motorcycle added successfully!" << endl;
            } 
            else {
                cout << "Invalid choice! Returning to main menu." << endl;
            }
            break;
            
            case 2:    
            cout << "\n--- Car Specifications ---\n";      //display specs
            for (auto &car : carList) {
                car.displayCarSpecs();
            }    
            break;

            case 3:    
            cout << "\n--- Motorcycle Specifications ---\n";    //display specs
            for (auto &bike : bikeList) {
                bike.displayBikeSpecs();
            }    
            break;

        case 4:    
            for (auto &car : carList) {             //Test performance using friend class
                cout << "\nTesting Car Performance For ...\n" << endl;
                tester.testPerformance(car);
            }    
            break;

        case 5:    
            for (auto &bike : bikeList) {           //Test performance using friend class
                cout << "\nTesting Motorcycle Performance For...\n" << endl;
                tester.testPerformance(bike);
            }    
            break;
    
        case 6:
            cout << "Exiting Program... Goodbye! " << endl;
            return 0;

        default:
            cout << "Invalid choice! Please select a valid option." << endl;
        }
    }

    return 0;
    
}