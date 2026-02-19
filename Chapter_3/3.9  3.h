// Fig. 3.8: Account.h
// Account class with name and balance data members, and a 
// constructor and deposit function that each perform validation.
#include <string>

class Account {
public:
   // Account constructor with two parameters  
   Account(std::string accountName, double initialBalance) 
      : name{accountName} { // assign accountName to data member name

      // validate that the initialBalance is greater than 0; if not,
      // data member balance keeps its default initial value of 0
      if (initialBalance > 0.0) { // if the initialBalance is valid
         balance = initialBalance; // assign it to data member balance
      }
   }

   // function that deposits (adds) only a valid amount to the balance
   void deposit(double depositAmount) {
      if (depositAmount > 0.0) { // if the depositAmount is valid
         balance += depositAmount; // add it to the balance 
      }
   }

   void withdraw(double withdrawAmount) {
      if (withdrawAmount > balance) {
       std::cout << "Withdrawal amount exceeded account balance.";
      }

      if (withdrawAmount <= balance) {
       std::cout << "withdraw " << withdrawAmount << " from account1 balance";
       balance -= withdrawAmount;
      }   
   }

   // function returns the account balance
   double getBalance() const {
      return balance;
   }

   // function that sets the name
   void setName(std::string accountName) {
      name = accountName;
   }

   // function that returns the name
   std::string getName() const {
      return name;
   }
private:
   std::string name; // account name data member 
   double balance{0.0}; // data member with default initial value
}; // end class Account
