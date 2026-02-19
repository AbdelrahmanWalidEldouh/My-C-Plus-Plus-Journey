/*
   1- 
      Calculate and display the number of hours of leave accrued
  ******************************************************************
  2-
      Initialize variables

      Prompt and read the inputs

      Calculate and display accrued leave
  ******************************************************************
  3-
      Initialize hours worked to zero
      Initialize accrued leave to zero

      Set output format to fixed with 2 decimal places

      Prompt for hours worked (or -1 to end)
      Input hours worked

      while hours worked not equale to -1

         Calculate accrued leave = 2 + ( hours worked * 0.10 )
         Display the accrued leave
         
         Prompt for hours worked (or -1 to end)
         Input hours worked
*/

#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    double hours_worked{ 0 };
    double accrued_leave{ 0 };

    cout << setprecision( 2 ) << fixed;

    cout << "Enter hours worked (or -1 to end): ";
    cin >> hours_worked;

    while( hours_worked != -1 )
    {
        accrued_leave = 2 + ( hours_worked * 0.1 );
        cout << "Accrued leave: " << accrued_leave << endl;

        cout << "\nEnter hours worked (or -1 to end): ";
        cin >> hours_worked;
    }
}