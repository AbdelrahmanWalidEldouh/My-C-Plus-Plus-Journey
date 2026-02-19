// Computerization of Health Records.cpp
#include <iostream>
#include <string>
#include "3.16.h"

using namespace std;

int main() {
    // Create a HealthProfile object with default values
    HealthProfile person1{"", "", "", 0, 0, 0, 0, 0};

    // Prompt user for personal data
    string firstName, lastName, gender;
    cout << "Enter your first name: ";
    getline(cin, firstName);
    person1.setFirstName(firstName);

    cout << "Enter your last name: ";
    getline(cin, lastName);
    person1.setLastName(lastName);

    cout << "Enter your gender (Male/Female): ";
    getline(cin, gender);
    person1.setGender(gender);

    int month, day, year;
    cout << "Enter your month of birth: ";
    cin >> month;
    person1.setMonthOfBirth(month);

    cout << "Enter your day of birth: ";
    cin >> day;
    person1.setDayOfBirth(day);

    cout << "Enter your year of birth: ";
    cin >> year;
    person1.setYearOfBirth(year);

    int height, weight;
    cout << "Enter your height (in inches): ";
    cin >> height;
    person1.setHeightInInches(height);

    cout << "Enter your weight (in pounds): ";
    cin >> weight;
    person1.setWeightInPounds(weight);

    // Display results
    cout << "\n" << person1.getFirstName() << " " << person1.getLastName();
    cout << "\nGender: " << person1.getGender();

    cout << "\nDate of birth: " 
         << person1.getMonthOfBirth() << "/" 
         << person1.getDayOfBirth()   << "/" 
         << person1.getYearOfBirth();

    cout << "\nAge is: " << person1.personAge() << " years old";
    cout << "\nHeight: " << person1.getHeightInInches() << " inches";
    cout << "\nWeight: " << person1.getWeightInPounds() << " pounds";

    cout << "\n\nMaximum heart rate is: " << person1.maxHeartRate() << " bpm";
    person1.targetHeartRate();

    cout << "\n\nBMI VALUES\n";
    cout << "Underweight: less than 18.5\n";
    cout << "Normal:      between 18.5 and 24.9\n";
    cout << "Overweight:  between 25 and 29.9\n";
    cout << "Obese:       30 or greater\n";

    cout << endl;
    person1.BMI();
    cout << endl;
}
