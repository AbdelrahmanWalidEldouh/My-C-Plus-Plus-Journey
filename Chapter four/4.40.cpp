/* Home building
 a program that will enable a home-builder to determine
 how many bricks and how many 50-kg bags of cement are required
 to build a double-skin wall using 230 * 115 mm bricks.
 The user should enter the height and width of the wall in meters.
 The program should calculate the area of the wall and then display the 
 number of bricks and the number of cement bags required to build the wall.
 The program should continue calculating brick and cement
 bag requirements until the user enters a height of −1.
 Use the following assumptions in your calculator:
 Bricks per square meter of double-skin wall = 104
 Volume of mortar per brick laid = 0.00034 m3
 Cement Bags per cubic meter of Mortar = 7
 Assume that 5% of mortar is wasted and that 2.5% of the bricks are
 unusable broken. Round off all requirements to the next integer.
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   double height{0.0};
   double width{0.0};
   double area{0.0};
   double bricks{0.0};
   double mortar{0.0};
   double bagsOfCement{0.0};

   cout << "Height of the wall(m) (-1 to quit): ";
   cin >> height;

   while(height != -1)
   {
      cout << "Width of the wall(m): ";
      cin >> width;

      area = height * width;

      // Bricks per square meter of double-skin wall = 104
      bricks = area * 104;
      
      mortar = bricks * 0.00034; // Volume of mortar for the whole wall

      // Assume that 5% of mortar is wasted and
      //  that 2.5% of the bricks are unusable broken.
      mortar += mortar * 0.05;
      bricks += bricks * 0.025;

      // Cement Bags per cubic meter of Mortar = 7
      bagsOfCement = mortar * 7;

      cout << "The number of 230 * 115 mm bricks required: "
            << ceil(bricks)
             << "\nAnd the number of 50-kg bags of cement required: "
              << ceil(bagsOfCement) << endl;

      cout << "\nHeight of the wall(m) (-1 to quit): ";
      cin >> height;
   }
}