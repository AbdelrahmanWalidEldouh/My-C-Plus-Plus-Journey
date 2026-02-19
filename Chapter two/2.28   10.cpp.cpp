// Digits of an Integer
#include <iostream> // enables input and output
using namespace std; // use names from the std namespace

int main() {
  int number{0}; // declare integer varible, initialized to 0

  cout << "Enter a four-digit integer: "; // prompt user for input
  cin >> number; // read a four-digit integer from the user

  // Get the digits of the integer
  int digit1 = number / 1000;
  int digit2 = (number / 100) % 10;
  int digit3 = (number / 10) % 10;
  int digit4 = number % 10;

  // Print the digits in reverse order separated by two spaces each
  cout << digit4 << "  " << digit3 << "  " << digit2 << "  " << digit1;
} // end function main
