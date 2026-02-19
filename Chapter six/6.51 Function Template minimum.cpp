#include <iostream>
using namespace std;

template <typename T>
T minimum(T value1, T value2) {
    return (value1 < value2) ? value1 : value2;
}

int main() {
    int i1 = 5, i2 = 10;
    cout << "Minimum int: " << minimum(i1, i2) << endl;

    double d1 = 5.5, d2 = 2.2;
    cout << "Minimum double: " << minimum(d1, d2) << endl;

    char c1 = 'z', c2 = 'a';
    cout << "Minimum char: " << minimum(c1, c2) << endl;
}