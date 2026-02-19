// 3.15.h (Target-Heart-Rate Calculator)
#include <iostream>
#include <string>

// Class HeartRates stores personal information and provides functions
// to calculate age, maximum heart rate and target heart rate range.
class HeartRates {
public:
    // Constructor that reseives the data members as parameters
    HeartRates (std::string first_Name, std::string last_Name, int month, int day, int year) 
    : firstName{first_Name}, lastName{last_Name}, monthOfBirth{month}, dayOfBirth{day},
      yearOfBirth{year}
    {
    }
    
    // Set and Get functions for each attribute
    void setFirstName (std::string first_Name) { firstName = first_Name; }
    std::string getFirstName() const { return firstName; }
    
    void setLastName (std::string last_Name) { lastName = last_Name; }
    std::string getLastName() const { return lastName; }
 
    void setMonthOfBirth (int month) { monthOfBirth = month; }
    int getMonthOfBirth() const { return monthOfBirth; }
    
    void setDayOfBirth (int day) { dayOfBirth = day; }
    int getDayOfBirth() const { return dayOfBirth; }

    void setYearOfBirth (int year) { yearOfBirth = year; }
    int getYearOfBirth() const { return yearOfBirth; }

    // Function that calculates and returns the person’s age (in years)
    int personAge() {
        int age = 2025 - yearOfBirth;
        return age;
    }
    
    // Function that calculates and returns the person’s maximum heart rate in beats per minute
    int maxHeartRate() {
        int ageInYears = 2025 - yearOfBirth;
        int maximum = 220 - ageInYears; // The formula for calculating maximum heart rate
        return maximum;
    }

    // Calculates and displays the target heart rate range (50–85% of max)
    void targetHeartRate() {
        int ageInYears = 2025 - yearOfBirth;
        int maximum = 220 - ageInYears;
        double targetFrom = maximum * 0.50;
        double targetTo = maximum * 0.85;
        std::cout << "\nTarget heart rate range is From " << targetFrom << " bpm To "
                   << targetTo;
    }

// Private data members: store personal details
private:
    std::string firstName;
    std::string lastName;
    
    int monthOfBirth; 
    int dayOfBirth;
    int yearOfBirth;							
};