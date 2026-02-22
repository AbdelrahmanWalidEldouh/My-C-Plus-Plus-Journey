#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // a
    const size_t size{ 5 };
    unsigned int values[ size ] { 2, 4, 6, 8, 10 };

    // b
    unsigned int* vptr;

    // c
    for ( size_t i{ 0 }; i < size; ++i ) {
        cout << values[ i ] << ' ';
    }
    
    // d
    // vptr = &values[ 0 ];
       vptr = values;

    // e
    cout << endl;
    for ( size_t j{ 0 }; j < size; ++j ) {
        cout << *( vptr + j ) << ' ';
    }

    // f
    cout << endl;
    for ( size_t k{ 0 }; k < size; ++k ) {
        cout << *( values + k ) << ' ';
    }

    // g
    cout << endl;
    for ( size_t l{ 0 }; l < size; ++l ) {
        cout << vptr[ l ] << ' ';
    }

    // h
    values[ 4 ];
    *( values + 4 );
    *( vptr + 4 ) ;
    vptr[ 4 ];

    // i: 1002500 + 3 * 4 = 1002512, 8

    // j: 1002500, 2
}