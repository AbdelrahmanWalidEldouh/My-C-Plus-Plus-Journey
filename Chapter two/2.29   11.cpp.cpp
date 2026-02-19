// Table of Face length, Surface area and Volume of cube
#include <iostream> // enables input and output
using namespace std; // use names from the std namespace

int main() {
  int face_length{0}; // declare variable for face length, initialized to 0

  cout << "Enter the face length of the cube: "; // prompt user to input face length of the cube
  cin >> face_length; // read input from the user

  // calculate surface area and volume
  int surface_area = face_length * face_length * 6;
  int volume = face_length * face_length * face_length;

// Print the Table Header and Results
  cout << "Face length (cm)\tSurface area(cm^2)\tVolume(cm^3)\n";
  cout << face_length << "\t\t\t" << surface_area << "\t\t\t" << volume;
} // end function main
