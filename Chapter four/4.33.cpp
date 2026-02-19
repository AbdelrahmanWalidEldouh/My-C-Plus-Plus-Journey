// Sides of a Triangle
#include<iostream>

using namespace std;

int main()
{
	double side1;
	double side2;
	double side3;
	
	cout << "Enter three nonzero values of the triangle's sides: ";
	cin >> side1 >> side2 >> side3;
	
	if( side1 + side2 > side3 )
	{
      if( side1 + side3 > side2 )
	  {
        if( side2 + side3 > side1 )
	    {
		  cout << "Triangle!";
		}
	  }
	}
}