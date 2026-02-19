// Compute x^y using a while loop
#include <iostream>
using namespace std;

int main() 
{
    cout << "Enter base as an integer: ";
    unsigned int x;
    cin >> x;

    cout << "Enter exponent as an integer: ";
    unsigned int y;
    cin >> y;

    unsigned int i{1}; // Initialize i to start counting from 1
    unsigned int power{1};

    // Count from 1 to y and multiply power by x each time
    while (i <= y) 
    {
        power *= x;
        ++i;
    }
    cout << power;
}