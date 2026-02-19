// Maximal Heart Rate Calculator
#include <iostream> // enables input and output
using namespace std; // use names from the std namespace

int main() {
  int age{0}; // declare an integer varible to store the user's age, initialized to 0

  cout << "Enter your age: "; // prompt user to enter their age
  cin >> age; // read the user's age
  
// calculate MHR using different formulas
  int mhr_traditionl = 220 - age; // traditionl formula
  int mhr_tanaka = 208 - 0.7 * age; // Tanaka formula (2001)
  int mhr_gellish = 207 - 0.7 * age; // Gellish formula (2007)
  int mhr_Nes = 211 - 0.64 * age; // Nes et al formula (2012)
  
  // display the estimated MHR from each formula
  cout << "Estimated Maximal Heart Rate (MHR):-\n";
  cout << "1) Traditional formula (220 - age):  " << mhr_traditionl << endl;
  cout << "2) Tanaka et al. (208 - 0.7 * age):  " << mhr_tanaka << endl;
  cout << "3) Gellish et al. (207 - 0.7 * age): " << mhr_gellish  << endl;
  cout << "4) Nes et al. (211 - 0.64 * age):    " << mhr_Nes  << endl;

// find the minimum value among all MHR estimates
  int range_from = mhr_traditionl;
  if (range_from >= mhr_tanaka)  range_from = mhr_tanaka;
  if (range_from >= mhr_gellish) range_from = mhr_gellish;
  if (range_from >= mhr_Nes)     range_from = mhr_Nes;

// find the maximum value among all MHR estimates
  int range_to = mhr_traditionl;
  if (range_to <= mhr_tanaka)  range_to = mhr_tanaka;
  if (range_to <= mhr_gellish) range_to = mhr_gellish;
  if (range_to <= mhr_Nes)     range_to = mhr_Nes;
   
// display the recommended range
  cout << "Recommended Heart Rate Range: " << range_from << " to " << range_to << " bpm\n";
} // end function main
