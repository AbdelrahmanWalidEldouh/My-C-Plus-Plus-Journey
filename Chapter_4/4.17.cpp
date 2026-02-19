// Find the largest number
#include <iostream>
using namespace std;

int main() {
    int counter{ 1 };
    int number{ 0 };
    int largest;

    cout << "Number 1: ";
    cin >> number;

    largest = number;

    while( counter < 10 )
    {
        ++counter;

        cout << "Number " << counter << ": ";
        cin >> number;

        if( number > largest )
        {
            largest = number;
        }
    }
    cout << "\nLargest number is " << largest;
}