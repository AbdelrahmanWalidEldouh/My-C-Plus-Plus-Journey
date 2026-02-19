// Arithmetic(sum, average and product), Smallest and Largest
#include <iostream> // enables program to prform input and outout
using namespace std; // program uses names from the std namespace

// function main begins program execution
int main() {
	int x{0}, y{0}, z{0}; // declare three integers, and initialized it to 0
  cout << "Input three different integers: "; // prompt user for data
  cin >> x >> y >> z; // read three integers from user
  cout << "Sum is " << x + y + z << endl; // print the sum of the three integers
  cout << "Average is " << (x + y + z) / 3 << endl; // print the average of the three integers
  cout << "Product is " << x * y * z << endl; // print the product of the three integers
  // Initialize smallest and largest with x
    int smallest = x;
    int largest = x;

    // Compare with y
    if (y < smallest) smallest = y;
    if (y > largest) largest = y;

    // Compare with z
    if (z < smallest) smallest = z;
    if (z > largest) largest = z;

    // Print results
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;
}  // end function main
