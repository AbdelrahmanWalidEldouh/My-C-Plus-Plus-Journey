#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    const size_t salaryRanges{9};

    array<size_t, salaryRanges> frequency{};
    
    string currencySymbol;
    double hourlyRate;
    int numberOfServers;

    cout << "Enter currency symbol: ";
    cin >> currencySymbol;

    cout << "Enter hourly rate: ";
    cin >> hourlyRate;

    cout << "Enter number of servers: ";
    cin >> numberOfServers;

    for (int i{0}; i < numberOfServers; ++i) {
        double hoursWorked;
        double tipsReceived;

        cout << "\nServer " << i + 1 << endl;

        cout << "Hours worked: ";
        cin >> hoursWorked;

        cout << "Tips received: ";
        cin >> tipsReceived;

        int salary{static_cast<int>(hoursWorked * hourlyRate + tipsReceived)};

        if (salary >= 100) {
            ++frequency[8];
        }
        else if (salary >= 20) {
            ++frequency[(salary - 20) / 10];
        }
    }

    cout << "\nSalary distribution:\n";

    for (size_t i{0}; i < salaryRanges - 1; ++i) {

        cout << setw(2) << currencySymbol << 20 + i * 10
           << "-" 
           << setw(2) << currencySymbol << 29 + i * 10
           << " : "
           << frequency[i] << endl;
   }

    cout << setw(2) << currencySymbol << 100
        << " and over : "
        << frequency[8] << endl;
}