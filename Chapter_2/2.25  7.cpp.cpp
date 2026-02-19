// Check if the first two numbers are factors of the the second
#include <iostream> // enables input and output
using namespace std; // use names from the std namespace

int main() {
  int x{0}, y{0}, z{0}; // declare three integer variables, and initialized to 0

  cout << "Enter three integers: \n"; // prompt user to enter values
  cin >> x >> y >> z; // read values from the user

  // check if x is a factor of z
  if (z % x == 0){
    cout << "x is factor of z\n";}
  if (z % x != 0){
    cout << "x is not factor of z\n";}

  // check if y is a factor of z
  if (z % y == 0){
    cout << "y is factor of z\n";}
  if (z % y != 0){
    cout << "y is not factor of z\n";}
} // end function main
