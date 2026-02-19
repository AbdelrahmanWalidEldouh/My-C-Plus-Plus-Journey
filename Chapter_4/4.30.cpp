// Fibonacci Sequence
#include <iostream>
using namespace std;

int main()
{
    int n1{ 0 };
    int n2{ 1 };

    cout << n1 << endl << n2 << endl;

    while( true )
    {
        int temp = n1 + n2;

        cout << temp << endl;
        
        n1 = n2;
        n2 = temp;
    }
}
    