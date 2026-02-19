
// Automating Electric Energy Purchases.cpp
#include<iostream>
#include"3.17.h"

using namespace std;

int main() {
   ElectricBill bill_1{0.0};

   double amountPaid;
   cout << "Enter amount paid in (in Tanzanian Shillings): ";
   cin >> amountPaid;
   bill_1.setAmountPaid(amountPaid);

   cout << "Amount paid: " << bill_1.getAmountPaid() << " TZS\n";

   // Show all deductions
   cout << "Value-Added Tax (VAT): " << bill_1.getVAT() << " TZS\n";

   cout << "Electricity and Water Utility Regulatory Authority (EWURA): "
         << bill_1.getEWURA() << " TZS\n";

   cout << "A fixed monthly service charge (5000 Tanzanian Shillings)\n";

   cout << "Rural Electricity Agency (REA): " << bill_1.getREA() << " TZS\n";

   // Final units purchased
   cout << "Electricity (in kilowatt-hours): " << bill_1.getUnits();
}