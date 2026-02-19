#include<iostream>
#include<cmath>
using namespace std;

double roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

int main()
{
	double number{1};
    while(number != -1) {
        cout << "Enter number (-1 to exit): ";
        cin >> number;

        if(number == -1) {
            break;
        }
        
        cout << "Number " << number << " Rounded to integer = "
                                                    << roundToInteger(number) << "\n";
        cout << "Number " << number << " Rounded to tenths = "
                                                    << roundToTenths(number) << "\n";
        cout << "Number " << number << " Rounded to hundredths = "
                                                    << roundToHundredths(number) << "\n";
        cout << "Number " << number << " Rounded to thousandths = "
                                                    << roundToThousandths(number) << "\n";                                
    }
}

double roundToInteger(double n) {
    double y = floor(n + 0.5);
    return y;
}

double roundToTenths(double n) {
    double y = floor(n * 10 + 0.5) / 10;
    return y;
}

double roundToHundredths(double n) {
    double y = floor(n * 100 + 0.5) / 100;
    return y;
}

double roundToThousandths(double n) {
    double y = floor(n * 1000 + 0.5) / 1000;
    return y;
}