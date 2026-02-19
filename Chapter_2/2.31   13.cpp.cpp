// Car-Pool Savings Calculator (calculate the cost per day of driving to work)
#include <iostream> // enables input and output
#include <iomanip>   // enables formatting like setprecision
using namespace std; // use names from the std namespace

int main() {
  // user's information
  int total_miles_per_day{0};
  int avg_miles_per_gallon{0};
  int cost_per_gallon{0};
  int parking_fees_per_day{0};
  int tolls_per_day{0};

  // prompt the user for input and read the input information
  cout << "a) Total miles driven per day:    ";
  cin >> total_miles_per_day;
  cout << "b) Average miles per gallon:      ";
  cin >> avg_miles_per_gallon;
  cout << "c) Cost per gallon of gasoline:   ";
  cin >> cost_per_gallon;
  cout << "d) Parking fees per day:          ";
  cin >> parking_fees_per_day;
  cout << "e) Tolls per day:                 ";
  cin >> tolls_per_day;

// calculate the cost per day
  int cost = total_miles_per_day / avg_miles_per_gallon * cost_per_gallon + parking_fees_per_day + tolls_per_day;

// Display the user's cost per day of driving to work
  cout << "\nYour cost per day of driving to work: " << cost << " units\n";
} // end function main
