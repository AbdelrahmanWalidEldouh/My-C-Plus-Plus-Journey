// Program: Person Information Manager
/* Description: This program defines a Person class that stores and manages
     a person's name, age, and sex. It displays default values, allows the user
     to enter new information, updates the object using setter functions, 
     and prints the updated details using getter functions */
#include <iostream>
#include <string>

using namespace std;

// Class to store and manage person's information
class Person {
    // public functions
    public:
        // member function that sets the person name in the object  
        void setName(string personName) {
          name = personName; // store the person name
        }
        // member function that sets the person age in the object
        void setAge(int personAge) {
          age = personAge; // store the person age 
        }
        // member function that sets the person sex in the object
        void setSex(string personSex) {
          sex = personSex; // store the person sex
        }
        // member function that retrieves the person name from the object
        string getName() const {
          return name; // return name's value to this function's caller (Give the value of name back to the line of code that asked for it)
        }
        // member function that retrieves the person age from the object
        int getAge() const {
          return age; // return ag's value to this function's caller
        }
        string getSex() const {
          return sex; // return sex's value to this function's caller
        }
    // private data
    private:
        string name = "Abdo"; // holds the person's name 
        int age = 19; // holds the person's age 
        string sex = "male"; // holds the person's sex 
};

int main() {
  Person person1; // creat and declare a (person1) object from the (Person) class

  // desplay the default values of (name, age and sex)
  cout << "Default name is: " << person1.getName() << endl;
  cout << "Default age is: " << person1.getAge() << endl;
  cout << "Default sex is: " << person1.getSex() << endl;
  
  // declare new values of name, age and sex
  string newName;
  int newAge;
  string newSex;

  // prompt for input and read data 
  cout << "Enter a new name: ";
  getline(cin, newName);
  cout << "Enter a new age: ";
  cin >> newAge;
  cout << "Enter a different sex: ";
  cin >> newSex;
  
  // use set member functions to sets the new values in the object
  person1.setName(newName);
  person1.setAge(newAge);  
  person1.setSex(newSex);

  // print the new information of the person
  cout << "\nThe new name is: " << person1.getName() << endl;
  cout << "The new age is: " << person1.getAge() << endl;
  cout << "The different sex is: " << person1.getSex() << endl;
}