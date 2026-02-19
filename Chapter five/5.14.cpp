// Modified Compound-Interest Program

// Fig. 5.6: Interest.cpp
// Compound-interest calculations with for.
#include <iostream>
#include <iomanip>
#include <cmath> // for pow function
using namespace std;

int main() {
   // set floating-point number format
   cout << fixed << setprecision(2);

   double principal{1000.00}; // initial amount before interest

   cout << "Initial principal: " << principal << endl;

   // display headers
   cout << "\nYear\t5%\t6%\t7%\t8%\t9%\t10%" << endl;

   for (unsigned int year{1}; year <= 10; year++) {
      cout << setw(4) << year;

      for(unsigned int rate{5}; rate <= 10; rate++) {

        double amount = principal * pow(1.0 + rate / 100.0, year);
        cout << "\t" << amount;
      }
      cout << endl;
   } 
}


/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
