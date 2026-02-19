// Fig. 5.8: DollarAmount.h
// DollarAmount class stores dollar amounts as a whole numbers of pennies
#include <string>
#include <cmath> 
#include <cstdint>

class DollarAmount {
public:

   explicit DollarAmount(int64_t value) : amount{value} {}
   explicit DollarAmount(int64_t dollars, int64_t cents) {
      amount = dollars * 100 + cents;
   }

   // add right's amount to this object's amount
   void add(DollarAmount right) {
      // can access private data of other objects of the same class
      amount += right.amount; 
   }

   // subtract right's amount from this object's amount
   void subtract(DollarAmount right) {
      // can access private data of other objects of the same class
      amount -= right.amount;
   }

   // uses integer arithmetic to calculate interest amount, 
   // then calls add with the interest amount
   void addInterest(int rate, int divisor) {
    int64_t numerator = amount * rate;
    int64_t quotient = numerator / divisor;
    int64_t remainder = numerator % divisor;

    // compare remainder with half divisor
    if (remainder * 2 > divisor) {
        ++quotient; // round up
    }
    else if (remainder * 2 == divisor) {
        // exactly .5 → round to even
        if (quotient % 2 != 0) {
            ++quotient;
        }
    }
    // else: round down (do nothing)

    DollarAmount interest{ quotient };
    add(interest);
}


   void divide(int divisor) {
       amount = (amount + divisor / 2) / divisor; 
   }

   // return a string representation of a DollarAmount object
   std::string toString() const {
      std::string dollars{std::to_string(amount / 100)};
      std::string cents{std::to_string(std::abs(amount % 100))};
      return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
   }
private:
   int64_t amount{0}; // dollar amount in pennies
};


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
