
// MotorVehicle.cpp
#include <iostream>
#include <string>
#include "3.11.h"
using namespace std;

int main() {
     MotorVehicle m1 ("Toyota", "Diesel", 2025);
    
     m1.setColor("Red");
     m1.setEngineCapacity(1600);

     m1.displayCarDetails();
    return 0;
}
