#include<iostream>
#include<cmath>
using namespace std;

int power(int, int);

int main()
{
    int b;
    cout << "Enter interger base: ";
    cin >> b;
    
    int e;
    cout << "Enter nonzero integer for exponent: ";
    cin >> e;
    
    while(e <= 0) {
    	cout << "Enter nonzero integer for exponent: ";
        cin >> e;
    }
    
    cout << power(b, e); 
}

int power(int base, int exponent) {
    if(exponent == 1) {
        return base;
    }
    else {
        return base * power(base, exponent - 1);
    }
}