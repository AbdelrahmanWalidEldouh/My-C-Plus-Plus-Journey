#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double hypotenuse(double, double);

int main()
{
    cout << setprecision(1) << fixed;
	cout << "Tringle1's hypotenuse: " << hypotenuse(3.0, 4.0) << endl;
	cout << "Tringle2's hypotenuse: " << hypotenuse(5.0, 12.0) << endl;
	cout << "Tringle3's hypotenuse: " << hypotenuse(8.0, 15.0);
}

double hypotenuse(double side1, double side2)
{
	double hypotenuse = sqrt(side1 * side1 + side2 * side2);
	return hypotenuse;
}