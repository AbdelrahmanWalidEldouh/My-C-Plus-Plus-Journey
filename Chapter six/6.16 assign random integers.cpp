#include<iostream>
#include<cstdlib>
using namespace std;



int main()
{
    srand(static_cast<unsigned int>(time(0)));

	int n;
    n = rand() % 4;
    cout << n << endl;
    n = 1 + rand() % 50;
    cout << n << endl;
    n = 2 + rand() % 43;
    cout << n << endl;
    n = 500 + rand() % 179;
    cout << n << endl;
    n = -2 + rand() % 5;
    cout << n << endl;
    n = -3 + rand() % 16;
    cout << n << endl;
}