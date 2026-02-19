// Odd or Even
#include <iostream> // enables input and output
using namespace std; // use names from the std namespace

int main() {
   int number{0}; // declare an integer variable, initialized to 0

    cout << "Enter an integer: "; // prompt user for input
    cin >> number; // read the integer from the user

    // check if the number is divisible by 2 with no remainder
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } if (number % 2 != 0) {
        cout << number << " is odd." << endl;
    }

    return 0; // indicate successful execution
}
