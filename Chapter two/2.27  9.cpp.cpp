// Integer Equivalent of a Character
#include <iostream> // enables input and output
using namespace std; // use names from the std namespace

int main() {
   char x{'A'}; // declare character varible, initialized to A

   cout << "Enter a character: "; // prompt user for a char value
   cin >> x; // read the char value from the user

   cout << static_cast<int>(x); // print the integer equivalent of a character typed at the keyboard
} // end function main
