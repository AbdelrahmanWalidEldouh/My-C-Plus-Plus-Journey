#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x{123.02};

    cout << setprecision(2)  << x << endl;
    cout << setprecision(5)  << x << endl;
    cout << setprecision(10) << x << endl;
    cout << setprecision(15) << x << endl;
    cout << setprecision(17) << x << endl;
    cout << setprecision(18) << x << endl;
}
