// Largest and Smallest Integers
#include <iostream> // enables program to prform input and outout
using namespace std; // program uses names from the std namespace

// function main begins program execution
int main() {
	 int a{0}, b{0}, c{0}, d{0}, e{0};
   cout << "Enter five integers: ";
   cin >> a >> b >> c >> d >> e;
   int Smallest = a;
   int Largest = a;
   if (b < Smallest) Smallest = b;
   if (b > Largest) Largest = b;
   if (c < Smallest) Smallest = c;
   if (c > Largest) Largest = c;
   if (d < Smallest) Smallest = d;
   if (d > Largest) Largest = d;
   if (e < Smallest) Smallest = e;
   if (e > Largest) Largest = e;
   cout << "Smallest is: " << Smallest << endl;
   cout << "Largest is: " << Largest << endl;
}  // end function main
