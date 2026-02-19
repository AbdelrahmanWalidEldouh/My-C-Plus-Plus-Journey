#include<iostream>
#include<cstdlib>
using namespace std;

double smallest(double, double, double);

int main()
{
    double number1, number2, number3;
    cout << "Enter three double numbers: ";
    cin >> number1 >> number2 >> number3;

    cout << "Smallest is: " << smallest(number1, number2, number3);
}

double smallest(double n1, double n2, double n3) {
    double smallest = n1;
    if(n2 < n1 && n2 < n3) {
        smallest = n2;
    }
    if(n3 < n1 && n3 < n2) {
        smallest = n3;
    }
    
    return smallest;
}