#include<iostream>
#include<cmath>
using namespace std;

int getMinutes(int, int, int);

int main()
{
    int d1, h1, m1;
    cout << "Enter time one (days, hours, minutes): ";
    cin >> d1 >> h1 >> m1;
    int time1 = getMinutes(d1, h1, m1);

    int d2, h2, m2;
    cout << "Enter time tow (days, hours, minutes): ";
    cin >> d2 >> h2 >> m2;
    int time2 = getMinutes(d2, h2, m2);

    cout << "\n" << "Difference between two times is " << abs(time1 - time2)
                                                                      << " minute(s).";
}

int getMinutes(int days, int hours, int minutes) {
    return days * 1440 + hours * 60 + minutes;
}