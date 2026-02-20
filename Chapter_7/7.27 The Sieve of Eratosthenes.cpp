#include <iostream>
#include <array>
using namespace std;

int main() {
    const size_t arraySize{ 1000 };
    array<int, arraySize> primes{};

    for ( size_t i{ 0 }; i < arraySize; ++i ) {
        primes[ i ] = 1;
    }
    
    primes[ 0 ] = 0;
    primes[ 1 ] = 0;

    for ( size_t i{ 2 }; i < arraySize; ++i ) {
        if ( primes[ i ] == 1 ) {
            for ( size_t j{ i * 2 }; j < arraySize; j += i ) {
                primes[ j ] = 0;
            }
        }
    }

    cout << "Prime numbers between 2 and 999:\n";
    for ( size_t i{ 2 }; i < arraySize; ++i ) {
        if ( primes[ i ] == 1 ) {
            cout << i << endl;
        }
    }
}