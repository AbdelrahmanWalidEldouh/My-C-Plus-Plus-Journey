// Print 1 to 4 in three different ways
#include <iostream> // enables input/output operations
using namespace std; // allows use of names like cout without std::

// start executing main
int main() {
  // a) One statement, one stream insertion operator
  cout << "1 2 3 4" << endl;

  // b) One statement, four stream insertion operators
  cout << 1 << " " << 2 << " " << 3 << " " << 4 << endl;

  // c) Four statements, each with one output
  cout << 1 << " ";
  cout << 2 << " ";
  cout << 3 << " ";
  cout << 4 << endl;
} // end function main
