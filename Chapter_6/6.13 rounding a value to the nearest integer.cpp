#include<iostream>
#include<cmath>
using namespace std;

double toNearstInteger(double);

int main()
{
	for(int i{1}; i <= 10; i++) {
        double number;
        cout << "Enter number to round it to nearst integer: ";
        cin >> number;

        cout << "Number " << number << " rounded to " << toNearstInteger(number) << "\n";
    }
}

double toNearstInteger(double n) {
    double y = floor(n + 0.5);

    return y;
}