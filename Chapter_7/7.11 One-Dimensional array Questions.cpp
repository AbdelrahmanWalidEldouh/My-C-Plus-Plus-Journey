#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    const size_t arraySize{10};
    
    // a
    array<double, arraySize> values{0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5};

    // b
    for ( size_t i{ 0 }; i < arraySize; i +=2 ) {
        ++values[ i ];
    }

    // c
    for ( size_t i{ 0 }; i < 5; ++i ) {
        cin >> values[ i ];
    }

    // d
    for ( size_t i{ 0 }; i < arraySize; ++i ) {
        cout << setprecision( 2 ) << fixed << values[ i ] << ' ';
        if ( i == 4 ) {
            cout << endl;
        }
    }
}