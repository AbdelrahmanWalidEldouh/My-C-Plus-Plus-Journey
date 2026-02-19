// 3.15.cpp (Target-Heart-Rate Calculator)
#include <iostream>
#include <string>
#include "3.15.h" 

using namespace std;

int main() {
    // Create a HeartRates object and display personal info,
    // age, maximum heart rate, and target heart rate range.

    HeartRates person1 {"Abdelrahman", "Eldouh", 20, 10, 1975};

    // Prompt user for first name and update object
    string firstName;
    cout << "Enter your first name: ";
    getline(cin, firstName);
    person1.setFirstName(firstName);

    // Prompt user for last name and update object
    string lastName;
    cout << "Enter your last name: ";
    getline(cin, lastName);
    person1.setLastName(lastName);

    // Prompt user for date of birth (month, day, year)
    int month;
    cout << "Enter your month of birth: ";
    cin >> month;
    person1.setMonthOfBirth(month);

    int day;
    cout << "Enter your day of birth: ";
    cin >> day;
    person1.setDayOfBirth(day);

    int year;
    cout << "Enter your year of birth: ";
    cin >> year;
    person1.setYearOfBirth(year);

    cout << person1.getFirstName() << " " << person1.getLastName();

    cout << "\nDate of birth: ";
    cout << person1.getMonthOfBirth() << " / "
         << person1.getDayOfBirth()   << " / "
         << person1.getYearOfBirth()  << endl;

    cout << "Age is: " << person1.personAge() << " years old\n";

    cout << "Maximum heart rate is: " << person1.maxHeartRate() << " bpm";

    person1.targetHeartRate();
    cout << " bpm\n";
}