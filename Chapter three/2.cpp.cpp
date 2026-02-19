// Person.cpp
#include<iostream>
#include<string>
#include "2.h"

using namespace std;

int main() {
  Person p1; // creat Person object p1

  // show that the initial value of p1's name is the empty string
  cout << "Initial account name is: " << p1.getName();

  // prompt for and read name
  cout << "\nPlease enter the pesrson name: ";
  string theName;
  getline(cin, theName); // read a line of text 
  p1.setName(theName); // put theName in p1
 
  // display the name stored in object p1
  cout << "Name in object p1 is: "
  << p1.getName() << endl;
}