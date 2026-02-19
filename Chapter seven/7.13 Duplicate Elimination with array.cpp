#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    const size_t size{ 20 };
    array<int, size> values{};
    size_t uniqueCount{ 0 };
    
    for ( size_t i{ 0 }; i < size; ++i ) {
        int number;
        do {
         cout << "Enter number " << i + 1 << ": ";
         cin >> number;
        }
        while ( number < 10 || number > 100 );

        bool isDuplicate{ false };
        for ( size_t j{ 0 }; j < uniqueCount; ++j ) {
            if ( number == values[ j ] ) {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate) {
            cout << "Duplicate number.\n";
            continue;
        }

        values[uniqueCount] = number;
        ++uniqueCount;
    }

    cout << "\nUnique values entered:\n";

    for (size_t i{0}; i < uniqueCount; ++i) {
        cout << values[i] << " ";
    }

    cout << endl;
}