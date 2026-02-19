#include <iostream>
using namespace std;

int main() {
    int n{ 1 };

    cout << "N\t" << "5*N\t" << "10*N\t" << "15*N\n";

    while( n <= 12 )
    {
        cout << n << "\t" << 5 * n << "\t" << 10 * n << "\t" << 15 * n << endl;
               
        ++n;
    }
}