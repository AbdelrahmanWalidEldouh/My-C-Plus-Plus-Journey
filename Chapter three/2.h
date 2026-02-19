// Person.h
#include<string>

class Person {
    public:
      // member function that sets the person name in the object
      void setName(std::string personName) {
        name = personName; // store the person name
      }
      // member function that retrieves the person name from the object
      std::string getName() const {
        return name; // return name's value to this function's caller
      }
    private:
      std::string name = ""; // data member containing person's name
}; // end class Person