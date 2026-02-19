// MotorVehicle.h
#include <iostream>
#include <string>

// Class MotorVehicle represents a car with details such as
// manufacturer, fuel type, year of manufacture, color, and engine capacity.
// Provides set/get functions to manipulate and retrieve this information.
class MotorVehicle {
      public:
             // Constructor that initializes make, fuelType and yearOfManufacture data members
             MotorVehicle (std::string m, std::string fuel, int year) 
             : make{m}, fuelType(fuel), yearOfManufacture{year}
             {

             }

             // *********************
             //   seters and geters
             // *********************
             
             void setMake (std::string m) { make = m; }
             std::string getMake () const { return make; }

             void setFuelType (std::string fuel) { fuelType = fuel; }
             std::string getFuelType () const { return fuelType; }

             void setYearOfManufacture (int year) { yearOfManufacture = year; }
             int getYearOfManufacture () const { return yearOfManufacture; }

             void setColor (std::string c) { color = c; }
             std::string getColor () const { return color; }

             void setEngineCapacity (int ec) { engineCapacity = ec; }
             int getEngineCapacity () const { return engineCapacity; }
      
             // Member function displays the five data members in five separate lines in the form "member name: member value".
             void displayCarDetails () {
                std::cout << "make:              " << make << std::endl;
                std::cout << "fuelType:          " << fuelType << std::endl;
                std::cout << "yearOfManufacture: " << yearOfManufacture << std::endl;
                std::cout << "color:             " << color << std::endl;
                std::cout << "engineCapacity:    " << engineCapacity << std::endl;
             }

      private:
              std::string make;      // The maker company to the car
              std::string fuelType;  // The type of the fuel that car use
              int yearOfManufacture; // The year of car's model
              std::string color;     // The color of the car
              int engineCapacity;    // The capacity of the engine's car
};