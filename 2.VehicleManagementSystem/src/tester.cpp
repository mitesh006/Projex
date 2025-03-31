#include "tester.h"

void Tester::testPerformance(Vehicle &v) {  //function to test and display the result
    v.displayName();
    cout << "\n--- Performance Test Results ---\n";
    v.displaySpecs();                       //reuse of function to display
    cout << "Performance test completed." << endl;
}