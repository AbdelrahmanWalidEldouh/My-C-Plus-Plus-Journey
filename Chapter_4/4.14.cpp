/*
   1- 
      Determine whether a customer has exceeded the credit limit
  *****************************************************************
  2-
      Initialize variables

      Prompt and read the inputs

      Calculate and display new balance

      If the new balance exceeds the customer’s credit limit
         Display the customer’s account number, credit limit,
         new balance and the message “Credit Limit Exceeded
  ******************************************************************
  3-
      Initialize account number to zero
      Initialize balance at the beginning of the month to zero
      Initialize total of all items charged by this customer this month to zero
      Initialize total of all credits applied to this customer's account this month to zero
      Initialize allowed credit limit to zero
      Initialize new balance to zero

      Set output format to fixed with 2 decimal places

      Prompt for account number (or -1 to quit)
      Input account numbet

      while account number not equale to -1
         Prompt and read account number, beginning balance, total of all items charged,
         total of all credits and credit limit

         Calculate new balance = beginning balance + charges – credits
         Display the new balance

         If new balance is greater than customer’s credit limit
            Display the customer’s account number, credit limit
            and the message “Credit Limit Exceeded.”
         
         Prompt for account number (or -1 to quit)
         Input account numbet
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int account_number{ 0 };

   double beginning_balance{ 0.0 };
   double total_charges{ 0.0 };
   double total_credits{ 0.0 };
   double credit_limit{ 0.0 };
   double new_balance { 0.0 };

   cout << setprecision( 2 ) << fixed;

   cout << "Enter account number (or -1 to quit): ";
   cin >> account_number;

   while( account_number != -1 )
   {
     cout << "Enter beginning balance: ";
     cin >> beginning_balance;
     cout << "Enter total charges: ";
     cin >> total_charges;
     cout << "Enter total credits: ";
     cin >> total_credits;
     cout << "Enter credit limit: ";
     cin >> credit_limit;

     new_balance = beginning_balance + total_charges - total_credits;
     cout << "New balance is " << new_balance << endl;

     if( new_balance > credit_limit )
     {
        cout << "Account:      " << account_number << endl;
        cout << "Credit limit: " << credit_limit << endl;
        cout << "Balance:      " << new_balance << endl;
        cout << "Credit Limit Exceeded.";
     }

     cout << "\n----------------------------------------\n";

     cout << "Enter account number (or -1 to quit): ";
     cin >> account_number;

   }

}