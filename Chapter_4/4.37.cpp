// Enforcing Privacy with Cryptography
#include<iostream>

using namespace std;

int main()
{
    // 1. ENCRYPTING
    int number{-1};

    while (number < 0)
    {
        cout << "Four-digit integer: ";
        cin >> number;

        if (number < 1000)
        {
            number = -1;
        }
        else if (number > 9999)
        {
            number = -1;
        }
    }


    int n1 = number / 1000;
    int n2 = (number % 1000) / 100;
    int n3 = (number % 100) / 10;
    int n4 = number % 10;

    n1 = (n1 + 7) % 10;
    n2 = (n2 + 7) % 10;
    n3 = (n3 + 7) % 10;
    n4 = (n4 + 7) % 10;

    int temporary = n1;
    n1 = n3;
    n3 = temporary;

    temporary = n2;
    n2 = n4;
    n4 = temporary;

    int encrypted = n1 * 1000 + n2 * 100 + n3 * 10 + n4;
    cout << "The encrypted integer is " << encrypted;


    // 2. DECRYPTING
    int num{-1};
    while(num < 0)
    {
        cout << "\n\nAn encrypted four-digit integer: ";
        cin >> num;

        if(num > 9999)
        {
            num = -1;
        }
    }

    int num1 = (num % 100) / 10;
    int num2 = num % 10;
    int num3 = num / 1000;
    int num4 = (num % 1000) / 100;

    // num1 and num2 (n + 10 - 7), num3 and num4 ((n + 10 - 7) % 10)
    num1 = num1 + 3;
    num2 = num2 + 3;
    num3 = (num3 + 3) % 10;
    num4 = (num4 + 3) % 10; 

    int decrypted = num1 * 1000 + num2 * 100 + num3 * 10 + num4;
    cout << "Decrypted: " << decrypted;
}
