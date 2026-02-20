#include <iostream>
#include <array>
using namespace std;

void printArray( const array<int, 5>&, int, int ); 

int main() {
    array<int, 5> values{5, 10, 15, 20, 25};

    printArray(values, 0, 4);
}

void printArray( const array<int, 5>& arr, int start, int end ) {
    if ( start == end ) {
        cout << arr[ start ] << " ";
        return;
    }

    cout << arr[ start ] << " ";

    printArray( arr, start + 1, end );
}