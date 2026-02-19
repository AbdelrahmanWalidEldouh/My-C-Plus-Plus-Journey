// Factorial
#include<iostream>

using namespace std;

int main()
{

 // a)

    int n{-1};
    
    while(n < 0)
    {
        cout << "Nonnegative integer: ";
        cin >> n;
    }

    int nFactorial{1};

    while(n > 1)
    {
        nFactorial *= n;
        --n;
    }
    cout << "Factorial is " << nFactorial;
    
 // b)

    int accuracy;
    cout << "\n\nAccuracy: ";
    cin >> accuracy;
    
    double e{1.0};
    nFactorial = 1;
    n = 1;
    
    while(n <= accuracy) 
    {
    	nFactorial *= n;
        e += 1.0 / nFactorial;
        n++;
    }
    cout << "e's value is " << e;

// c)
 
    nFactorial = 1;
    n = 1;
    double ex{1.0};

    double x;
    cout << "\n\nx: ";
    cin >> x;

    double x_{1.0};

    while(n <= accuracy) 
    {
    	nFactorial *= n;
        x_ *= x;
        ex += x_ / nFactorial;
        n++;
    }
    cout << "e^x is " << ex;
}