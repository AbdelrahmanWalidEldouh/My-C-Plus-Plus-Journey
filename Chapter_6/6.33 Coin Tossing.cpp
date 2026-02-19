#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip() {
    int result = rand() % 2;
    
    if (result == 0) {
        cout << "Tails  ";
    } else {
        cout << "Heads  ";
    }
    
    return result;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int headsCount = 0;
    int tailsCount = 0;

    cout << "Tossing the coin 100 times:\n" << endl;

    for (int i = 1; i <= 100; i++) {
        if (flip() == 1) {
            headsCount++;
        } else {
            tailsCount++;
        }

        if (i % 10 == 0) {
            cout << endl;
        }
    }

    cout << "Heads appeared: " << headsCount << " times" << endl;
    cout << "Tails appeared: " << tailsCount << " times" << endl;

    return 0;
}