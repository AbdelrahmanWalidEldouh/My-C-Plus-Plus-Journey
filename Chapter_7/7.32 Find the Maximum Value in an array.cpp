#include <iostream>
#include <array>
using namespace std;

int recursiveMaximum( const array<int, 10>&, int, int );

int main() {
    array<int, 10> myArray{ 12, 45, 60, 70, 55, 35, 24, 44, 100, 1 };

    cout << "Maximum of: ";
    for ( size_t i{ 0 }; i < myArray.size(); ++i ) {

        cout << myArray[ i ];

        if ( i < ( myArray.size() - 1 ) ) {
            cout << ", ";
        } 
    }

    cout << "\nis ";

    cout << recursiveMaximum( myArray, 0, myArray.size() - 1 );
}

int recursiveMaximum( const array<int, 10>& arr, int start, int end ) {

    if (start == end) {
        return arr[ start ];
    }

    int max = recursiveMaximum( arr, start + 1, end );

    if ( arr[ start ] > max ) {
        return arr[ start ];
    }
    else {
        return max;
    }
}