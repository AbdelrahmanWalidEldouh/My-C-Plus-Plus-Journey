#include<iostream>
#include<cstdlib>
using namespace std;

bool isFactor(int, int);

int main()
{
     while ( true ) {
      
      int a, b;

      cout << "Two integer numbers (0 to end): ";
      cin >> a;
      if ( !a ) break;
      cin >> b;

      cout << b << " is " << ( isFactor( a, b ) ? "" : "not " )
         << "a factor of " << a << "\n\n";
   }

}

bool isFactor(int number1, int number2) {
    return number1 % number2 == 0;
}