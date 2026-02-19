// Invoice class.h
#include <iostream>
#include <string>

class Invoice {
    public:
       // Invoice constructor with four parameters
       Invoice (std::string number, std::string description, int quant, int ppi) 
        :partNumber{number}, // assign number to data member partNumber
         partDescription{description}, // assign description to data member partDescription
         quantity{quant}, // assign quant to data member quantity
         pricePerItem{ppi}, // assign ppi to data member pricePerItem
         vatRate{0.20},
         discountRate{0.0}
      {
      }
        
       // member function to sets the number of the item in the object
       void setNumber (std::string part_number) {
          partNumber = part_number;
       }

       // member function to retrive the part's number from the ibject 
       std::string getNumber() const {
          return partNumber; 
       } 
       
       // member function to sets the description of the item in the object
       void setDescription (std::string part_description) {
          partDescription = part_description;
       }

       // member function to retrive the part's description from the ibject
       std::string getDescription() const {
          return partDescription;
       } 
       
       // member function to sets the valid quantity of the item in the object
       void setQuantity (int q) {
        // cheack if the value is positive, if it not left it unchanged
        if (q > 0) {
          quantity = q;
        }
       }

       // member function to retrive the quantity of the item from the ibject
       int getQuantity() const {
          return quantity;
       } 

       // member function to sets the valid price of the item in the object
       void setPrice (int price) {
        // cheack if the value is positive, if it not left it unchanged
        if (price > 0) {
          pricePerItem = price;
        }
       }

       // member function to retrive the price of the item from the ibject
       int getPrice() const {
          return pricePerItem;
       }

       // member function to sets the valid (VAT) of the item in the object
       void setVat (double vat) {
        // cheack if the value is positive, if it not left it unchanged
        if (vat >= 0) {
          vatRate = vat;
        }
       }

       // member function to retrive the (VAT) of the item from the ibject
       double getVat() const {
          return vatRate;
       }

       // member function to sets the valid discount on the item in the object
       void setDiscount (double discount) {
        // cheack if the value is positive, if it not left it unchanged
        if (discount >= 0) {
          discountRate = discount;
        }
       }

       // member function to retrive the (VAT) of the item from the ibject
       double getDiscount() const {
          return discountRate;
       }

       // member function to return the Invoice amount
       double getInvoiceAmount () {
          double subtotal = quantity * pricePerItem;
          double tax = subtotal * vatRate;
          double discount = subtotal * discountRate;
          return subtotal + tax - discount;
       }

    private:
       // six data members
       std::string partNumber; // holds part's number
       std::string partDescription;  // holds part's description
       int quantity;  // holds the quantity of the item being purchased
       int pricePerItem;
       double vatRate{0.20}; // holds the value-added tax (VAT) rate as defualt value of 0.20
       double discountRate{0.0}; // holds the dicount rate as defualt value of 0.0
};  