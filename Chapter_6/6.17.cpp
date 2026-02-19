#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    cout << rand() % 5 * 3 << endl;

    cout << 3 + rand() % 6 * 2 << endl;

    cout << 6 + rand() % 4 * 4 << endl;
}