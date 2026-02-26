#include <iostream>
#include "Quadratic.h"

using namespace std;

int main() {
    Quadratic q1(2, 4, -6);
    Quadratic q2(1, 2, 3);
    
    cout << "Equation 1: " << q1.toString() << endl;
    q1.solve();
    
    q1.add(q2);
    cout << "After adding q2: " << q1.toString() << endl;
    
    return 0;
}