/*
1-
   Read in a five-digit integer and determine whether it’s a palindrome
  **********************************************************************
2-
   Initialize variable number

   Validate the input
   Prompt and read number

   Determine whether it’s a palindrome
  **********************************************************************
3-
   Initialize number to zero

   While number is equal to zero 
     Prompt for number
     Input number

     If number is greater than 99999
      Return number to zero

     Else if number is less than 10000
      Return number to zero

    If number Mod 10 is equal to number divided by 10000
      If number divided by 10 Mod 10 is iqual to number divided by 1000 Mod 10 
        Display it is palindrome
    Else
      Display it is not a palindrome
*/

// الفكرة من الآخر بعد شغل أكثر من ثلاث ساعات عليهااني بستخدم (10/) لمسح رقم من اليمين
//  وكل ما أزود صفر يزيد رقم , وبستخدم (10%) لمسح كل الأرقام اللي على اليمين عدا
// آخر رقم كل ما أزود صفر أزود رقم مايتمسحش 

#include <iostream>
using namespace std;

int main()
{
    int number{ 0 };

    while( number == 0 )
    {
        cout << "Enter five-digit number: ";
        cin >> number;

        if( number > 99999 )
        {
            number = 0 ;
        }
        if( number < 10000 )
        {
            number = 0 ;
        }
    }
    
    if( number % 10 == number / 10000 )
    {
        if( number / 10 % 10 == number / 1000 % 10)
        {
            cout << "Palindrome!\n";
        }
    }
    
    else
    {
        cout << "Not a palindrome!\n";
    }
}
