
// Computerization of Health Records.h
#include <iostream>
#include <string>

class HealthProfile {
public:
    HealthProfile (std::string fName, std::string lName, std::string gend,
                   int month, int day, int year,
                   int height, int weight)
    : firstName{fName}, lastName{lName}, gender{gend},
      monthOfBirth{month}, dayOfBirth{day}, yearOfBirth{year},
      heightInInches{height}, weightInPounds{weight}
    {
    }

    // Set and Get functions for each attribute
    void setFirstName (std::string first_Name) { firstName = first_Name; }
    std::string getFirstName() const { return firstName; }
    
    void setLastName (std::string last_Name)   { lastName = last_Name; }
    std::string getLastName() const  { return lastName; }

    void setGender (std::string gend)          { gender = gend; }
    std::string getGender() const    { return gender; }

    void setMonthOfBirth (int month)           { monthOfBirth = month; }
    int getMonthOfBirth() const      { return monthOfBirth; }
     
    void setDayOfBirth (int day)               { dayOfBirth = day; }
    int getDayOfBirth() const        { return dayOfBirth; }

    void setYearOfBirth (int year)             { yearOfBirth = year; }
    int getYearOfBirth() const       { return yearOfBirth; }

    void setHeightInInches (int height)        { heightInInches = height; }
    int getHeightInInches() const    { return heightInInches; }

    void setWeightInPounds (int weight)        { weightInPounds = weight; }
    int getWeightInPounds() const    { return weightInPounds; }

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
                   << targetTo << " bpm\n";
    }

    // Function that calculates and display the person’s BMI
    void BMI() {
        double bmi = weightInPounds * 703 / (heightInInches * heightInInches);
        if (bmi < 18.5){
    std::cout << "Your BMI is: " << bmi << " (Underweight)";
    }
    if (bmi >= 18.5 && bmi <= 24.9){
    std::cout << "Your BMI is: " << bmi << " (Normal)";
    }
    if (bmi >= 25 && bmi <= 29.9){
    std::cout << "Your BMI is: " << bmi << " (Overweight)";
    }
    if (bmi >= 30){
    std::cout << "Your BMI is: " << bmi << " (Obese)";
    }
    }

private:
    std::string firstName;
    std::string lastName;
    std::string gender;
    
    int monthOfBirth; 
    int dayOfBirth;
    int yearOfBirth;

    int heightInInches;
    int weightInPounds;
};