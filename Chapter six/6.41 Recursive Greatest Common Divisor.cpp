#include<iostream>

using namespace std;

int gcd(int, int);

int main()
{
	int n1,  n2;
	cout << "Enter tow integers: ";
	cin >> n1 >> n2;
	
	cout << "The Greatst Common Divisor (GCD) is " << gcd(n1, n2);
}

int gcd(int x, int y)
{
	if(y == 0) {
        return x;
    }
    else {
        return gcd(y, x % y);
    }
}