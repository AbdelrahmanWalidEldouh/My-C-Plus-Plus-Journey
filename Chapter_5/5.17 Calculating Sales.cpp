#include <iostream>
using namespace std;

int main() {
    int productNumber{0};
    double totalSales{0.0};

    while (true) {
        cout << "Enter product number (1-5) [0 - exit]: ";
        cin >> productNumber;

        if (productNumber == 0) {
            break;
        }

        if (productNumber < 1 || productNumber > 5) {
            cout << "Invalid product number! Try again." << endl;
            continue;
        }

        int quantity{0};
        cout << "Enter quantity sold: ";
        cin >> quantity;

        double productPrice{0.0};
        switch(productNumber) {
            case 1: productPrice = 2.98; break;
            case 2: productPrice = 4.50; break;
            case 3: productPrice = 9.98; break;
            case 4: productPrice = 4.49; break;
            case 5: productPrice = 6.87; break;
        }

        totalSales += productPrice * quantity;
        cout << "Current total: $" << totalSales << endl;
    }

    cout << "Final total sales: $" << totalSales << endl;
}
