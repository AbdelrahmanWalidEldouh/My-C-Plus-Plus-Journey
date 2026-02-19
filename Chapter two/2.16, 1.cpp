//This program prints the sum, product, difference, and quotient of two numbers enterd by the user
#include <iostream> //enables program to perform input and outout
using namespace std; //program uses names from the std namespace

// function main begins program execution
int main() {
  int x{0}; //declares first variable and initialize to 0
  int y{0}; //declares second vrible and initialize to 0
 
  cout << "Enter two integers: "; // prompt user for data
  cin >> x >> y; // read two integers from user
  cout << x + y << endl << x * y << endl << x - y << endl << x / y; //prints the sum, product, difference, and quotient of the two numbers 
} // end function main