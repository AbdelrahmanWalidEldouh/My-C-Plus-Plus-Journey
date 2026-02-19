// Invoice class.cpp
#include <iostream>
#include <string>
#include "3,10  4.h"

using namespace std;

int main() 
{
  // Create an Invoice object with part number, description, quantity, and price per item
  Invoice invoice1("A123", "Hammer", 5, 10);

  // display the initial invoice details
  cout << "Part Number: " << invoice1.getNumber() << endl;
  cout << "Description: " << invoice1.getDescription() << endl;
  cout << "Quantity: " << invoice1.getQuantity() << endl;
  cout << "Price per item: " << invoice1.getPrice() << endl;
  cout << "VAT Rate: " << invoice1.getVat() << endl;
  cout << "Discount Rate: " << invoice1.getDiscount() << endl;
  
  // Display the total invoice amount (subtotal + VAT - discount)
  cout << "Initial Invoice Amount: " << invoice1.getInvoiceAmount() << endl;

  // Change the quantity, price, and apply a discount
  invoice1.setQuantity(10);      // Set new quantity
  invoice1.setPrice(80);         // Set new price
  invoice1.setDiscount(0.10);    // Apply 10% discount

  // Display the updated invoice details
  cout << "\n--- After Updates ---\n";
  cout << "Quantity: " << invoice1.getQuantity() << endl;
  cout << "Price per item: " << invoice1.getPrice() << endl;
  cout << "Discount Rate: " << invoice1.getDiscount() << endl;
  cout << "Updated Invoice Amount: " << invoice1.getInvoiceAmount() << endl;
} 