// Calculating the Product of the Multiples of 3
 #include <iostream>
 using namespace std;

 int main() {
    double x{1};

    for(int i{3}; i <= 50; i += 3) {
        x *= i;
    }
    cout << x;
 }