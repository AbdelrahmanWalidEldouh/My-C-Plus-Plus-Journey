#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateCharges(double);

int main() {
    double hours;
    double totalHours{0.0};
    double totalCharges{0.0};

    cout << left << setw(10) << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;

    for (int car{1}; car <= 3; ++car) {
        if (car == 1) hours = 1.5;
        else if (car == 2) hours = 4.0;
        else hours = 24.0;

        double currentCharge = calculateCharges(hours);
        
        totalHours += hours;
        totalCharges += currentCharge;

        cout << left << setw(10) << car 
             << fixed << setprecision(1) << setw(10) << hours 
             << setprecision(2) << currentCharge << endl;
    }

    cout << left << setw(10) << "TOTAL" 
         << fixed << setprecision(1) << setw(10) << totalHours 
         << setprecision(2) << setw(10) << totalCharges << endl;

}

double calculateCharges(double hours) {
    double fee{20.00}; 

    if (hours > 3.0) {
        fee += ceil(hours - 3.0) * 5.00;
    }

    if (fee > 50.00) {
        fee = 50.00;
    }

    return fee;
}