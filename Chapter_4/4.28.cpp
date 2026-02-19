/*
1-
   Printing the Decimal Equivalent of a Binary Number.
  ****************************************************
2-
   Initialaize variables.

   Input binary number.

   Calculate decimal equivalent

   Print decimal equivalent.
  ****************************************************
3-
   Initialize decimal to zero
   Initialize value to one

   Prompt for binary
   Read a binary number

   while binary is greater than zero
     Decimal += binary % 10 * value
     Value *= 2
     Binary /= 10

   Display decimal
*/
#include <iostream>
using namespace std;

int main()
{
    int decimal{ 0 };
    int value{ 1 };

    int binary;
    cout << "Binary number: ";
    cin >> binary;

    while( binary > 0 )
    {
        decimal += binary % 10 * value;
        value *= 2;
        binary /= 10;
    }

    cout << "Decimal equivalent is " << decimal;
}