#include<iostream>
#include<cmath>
using namespace std;

int reverse(int);

int main()
{
    int number;
    cout << "Number: ";
    cin >> number;

   cout << "\nReversed is " << reverse(number) << endl;

}

int reverse(int n) {
    int reversed{0};
    while(n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}