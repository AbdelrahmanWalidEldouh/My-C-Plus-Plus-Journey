#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int);

int main()
{
    for(int i{2}; i <= 10'000; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
}

bool isPrime(int n) {
    if (n < 2) return false;

    for(int i{2}; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}