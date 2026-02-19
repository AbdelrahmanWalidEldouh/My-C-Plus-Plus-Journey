#include<iostream>
#include<cstdlib>
using namespace std;

bool isMultiple3(int);

int main()
{
    int n{1};
    cout << "Integer number (0 to end): ";
    cin >> n;
    while(n != 0) {

        cout << n << " is " <<  (isMultiple3(n)? "" : "not ") << "a multiple of 3"
              << "\n\n";

        cout << "Integer number (0 to end): ";
        cin >> n;
    }
}

bool isMultiple3(int number) {
    return number % 3 == 0;
}