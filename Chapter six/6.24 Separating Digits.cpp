#include<iostream>
#include<cstdlib>
using namespace std;

int quotient(int a, int b) {
    return a / b;
}
int remainder(int a, int b) {
    return a % b;
}

void separate(int n) {
    int d1 = quotient(n, 10000);
    if(d1 != 0) {
        cout << d1 << " ";
    }
    n = remainder(n, 10000);

    int d2 = quotient(n, 1000);
    if(d2 != 0 || d1 != 0) {
        cout << d2 << "  ";
    }
    n = remainder(n, 1000);

    int d3 = quotient(n, 100);
    if (d3 != 0 || d2 != 0 || d1 != 0) cout << d3 << "  ";
    n = remainder(n, 100);

    int d4 = quotient(n, 10);
    if (d4 != 0 || d3 != 0 || d2 != 0 || d1 != 0) cout << d4 << "  ";

    int d5 = remainder(n, 10);
    cout << d5 << endl;
}

int main()
{
    int number;
    do {
        cout << "Enter an integer between 1 and 32767: ";
        cin >> number;
    } while(number < 1 || number > 32767);

    separate(number);
    cout << endl;
}