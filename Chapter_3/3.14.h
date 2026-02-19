// List Initializers.h
#include<iostream>
#include<string>

// Class provide a constructor with four parameters, getDetails member function
// and four data members(store account informations).
class Account {
public:
    // Initialize accountNumber, firstName, lastName and balance data members  
    Account (int aN, std::string fN, std::string lN, double b)
      : accountNumber{aN}, firstName{fN}, lastName{lN}, balance{b} 
      {
      }
      
     // Display account details
     void getDetails() {
         std::cout << "Account number: "    << accountNumber
              << "\nAccount name: "    << firstName << " " << lastName
              << "\nAccount balance: " << balance << "$";
     }
private:
    int accountNumber;      // Store account namber
    std::string firstName;  // Store account first name
    std::string lastName;   // Store account last name
    double balance;	        // Store account balance
};