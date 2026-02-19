// Program that prints numbers from 10 to 0 (while loop)
#include <iostream>
using namespace std;

int main() 
{
    long var = 10;
    long x = 0; // Counter

    while (x <= 10) 
    {
        var -= x;
        ++x;  // Or x += 1; or x = x + 1;
    cout << var << endl; 
    }
}