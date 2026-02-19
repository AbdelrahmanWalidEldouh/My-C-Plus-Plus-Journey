#include<iostream>

using namespace std;

int integerPower(int, int);

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
    
    cout << integerPower(b, e);    
}

int integerPower(int base, int exponent) 
{
	int power{1};
	
	for(int i{1}; i <= exponent; i++)
	{
		power *= base;
	}
	
	return power;
}