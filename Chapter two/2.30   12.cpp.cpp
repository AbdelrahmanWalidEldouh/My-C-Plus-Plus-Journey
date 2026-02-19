// Body Mass Index Calculator
#include <iostream> // Enables input and output
using namespace std; // Use names from the std namespace

int main() {
  // Display BMI categories
  cout << "BMI VALUES\n";
  cout << "Underweight: less than 18.5\n";
  cout << "Normal:      between 18.5 and 24.9\n";
  cout << "Overweight:  between 25 and 29.9\n";
  cout << "Obese:       30 or greater\n\n";

  double weight{0.0}; // Declare double variable (user's weight in Kilograms), initialized to 0.0
  double height{0.0}; // Declare double variable (user's height in Meters), initialized to 0.0

  cout << "Enter your weight (kg): "; // Prompt user to enter them weight
  cin >> weight; // Read the user's weight
  
  cout << "Enter your height (m): "; // Prompt user to enter them height
  cin >> height; // Read the user's height

// Calculate BMI
  double bmi = weight / (height * height);

// Print the the user's BMI category
  if (bmi < 18.5){
  cout << "Your BMI is: " << bmi << " (Underweight)";
  }
  if (bmi >= 18.5 && bmi <= 24.9){
  cout << "Your BMI is: " << bmi << " (Normal)";
  }
  if (bmi >= 25 && bmi <= 29.9){
  cout << "Your BMI is: " << bmi << " (Overweight)";
  }
  if (bmi >= 30){
  cout << "Your BMI is: " << bmi << " (Obese)";
  }
} // end function main
