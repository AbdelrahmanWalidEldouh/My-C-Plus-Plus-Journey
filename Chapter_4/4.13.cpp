/* pesudocode: 1- 
                  Calculate and print fuel usage (kms per liter)

               2-
                  Initialize variables

                  Prompt for kms and liters

                  Calculate and display kms per liter this trip and Total kms per liter
               
               3- 
                  Initialize total_kms to zero
                  Initialize total_liters to zero
                  Initialize kms
                  Initialize liters

                  Set output format to fixed with 6 decimal places

                  Prompt for kilometers driven (-1 to quit)
                    Input kms

                  While kms not equal to -1
                    Prompt for liters used
                    Input liters

                    Add kms to total_kms
                    Add liters to total_liters

                    Calculate and display kms per liter this trip
                    Calculate and display total kms per liter

                    Prompt for kilometers driven (-1 to quit)
                    Input kms
*/

// C++ program
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total_kms{ 0 };
    int total_liters{ 0 };
    int kms;
    int liters;

    cout << setprecision(6) << fixed;

    cout << "Enter kilometers driven (-1 to quit): ";
    cin >> kms;

    while(kms != -1)
    {
        cout << "Enter liters used: ";
        cin >> liters;
        
        total_kms += kms;
        total_liters += liters;

        cout << "kms per liter this trip: " << 1.0 * kms / liters << endl;
        cout << "Total kms per liter: " << 1.0 * total_kms / total_liters << endl;

        cout << "Enter kilometers driven (-1 to quit): ";
        cin >> kms;
        
    }

}