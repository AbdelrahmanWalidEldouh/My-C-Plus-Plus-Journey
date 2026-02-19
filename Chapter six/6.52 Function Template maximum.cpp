#include <iostream>
using namespace std;

template <typename T>
T maximum(T value1, T value2) {
    return (value1 > value2) ? value1 : value2;
}

int main() {
    int i1, i2;
    cout << "Enter two integers: ";
    cin >> i1 >> i2;
    cout << "The maximum integer is: " << maximum(i1, i2) << endl;

    double d1, d2;
    cout << "\nEnter two double values: ";
    cin >> d1 >> d2;
    cout << "The maximum double is: " << maximum(d1, d2) << endl;

    char c1, c2;
    cout << "\nEnter two characters: ";
    cin >> c1 >> c2;
    cout << "The maximum character is: '" << maximum(c1, c2) << "'" << endl;

}