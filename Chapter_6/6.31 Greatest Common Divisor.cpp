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
	while(y != 0)
	{
		int temp = y;
		y = x % y;
		x = temp;
	}
	return x;
}