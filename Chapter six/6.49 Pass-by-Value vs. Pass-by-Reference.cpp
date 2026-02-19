#include <iostream>
using namespace std;

int squareByValue(int n) {
    return n *= n;
}

void squareByReference(int &nRef) {
    nRef *= nRef;
}

int main() {
    int x = 10;
    int y = 10;

    cout << "Value of x before squareByValue: " << x << endl;
    squareByValue(x); 
    cout << "Value of x after squareByValue: " << x << " (No change!)" << endl;

    cout << "--------------------------" << endl;

    cout << "Value of y before squareByReference: " << y << endl;
    squareByReference(y); 
    cout << "Value of y after squareByReference: " << y << " (Changed in memory!)" << endl;

    return 0;
}