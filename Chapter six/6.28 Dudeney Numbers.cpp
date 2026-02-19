#include <iostream>
#include <cmath>

using namespace std;

bool isDudeney(int number)
{
    double root = cbrt(number);

    // check if perfect cube
    if (root != int(root))
        return false;

    int sum = 0;
    int temp = number;

    // sum digits
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    return (sum == int(root));
}

int main()
{
    int count = 0;
    int number = 1;

    while (count < 7)
    {
        if (isDudeney(number))
        {
            cout << number << endl;
            count++;
        }
        number++;
    }

    return 0;
}
