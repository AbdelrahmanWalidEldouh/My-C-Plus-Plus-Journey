// Find the largest two numbers
#include <iostream>
using namespace std;

int main() {
    int counter{ 1 };
    int number{ 0 };
    int largest;
    int secondLargest;

    cout << "Number 1: ";
    cin >> number;

    largest = number;
    secondLargest = number;

    while( counter < 10 )
    {
        ++counter;

        cout << "Number " << counter << ": ";
        cin >> number;

        if( number > largest )
        {
            secondLargest = largest;
            largest = number;
        }
        else if( number < largest )
        {
            if( number > secondLargest )
            {
                secondLargest = number;
            }
        }
    }

    cout << "\nLargest numbers are " << largest << " and " << secondLargest;
}
