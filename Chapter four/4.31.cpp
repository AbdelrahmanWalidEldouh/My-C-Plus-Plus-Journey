// Calculating a Sphere’s Circumference, Area and Volume
#include <iostream>
using namespace std;

int main()
{
    double π{ 3.14159 };
    
    double r;
    cout << "Enter sphere's radius: ";
    cin >> r;

    cout << "Sphere's Circumference is " << 2 * π * r << endl
         << "Sphere's Area is "          << π * r*r << endl
         << "Sphere's Volume is "        << 4.0/3.0 * π * r*r*r;
}