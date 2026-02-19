#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main() {
    default_random_engine engine{ static_cast< unsigned >( time( 0 ) ) };
    uniform_int_distribution< int > die{ 1, 6 };

    const size_t arraySize{ 11 };
    array<int, arraySize> frequency{};

    for (int i{ 0 }; i <= 36'000'000; i++) {
        int die1{ die( engine ) };
        int die2{ die( engine ) };

        ++frequency[ die1 + die2 - 2 ];
    }

    cout << "Sum" << setw( 10 ) << "Total" << endl;
    cout << "-------------" << endl;

    for ( size_t i{ 0 }; i < arraySize; i++ ) {
        cout << setw( 3 ) << i + 2 << setw( 10 ) << frequency[ i ] << endl;
    }

    cout << "\nExpected ratio is 6.000, actual is "
          << setprecision( 3 ) << fixed << 36'000'000.0 / frequency[ 5 ] << endl;
}