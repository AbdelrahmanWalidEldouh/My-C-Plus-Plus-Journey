// List Initializers.cpp
#include<iostream>
#include<string>
#include "3.14.h"

using namespace std;

int main() {
    Account account1(315, "Abdelrahman", "Eldouh", 3000.500); // Creat account1 object from class Account 
    
    // Display account1 object details using getDetails member function
    account1.getDetails();
}