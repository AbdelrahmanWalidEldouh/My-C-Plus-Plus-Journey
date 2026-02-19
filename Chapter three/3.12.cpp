
// Date.cpp
#include <iostream>
#include "3.12.h"

using namespace std; 

int main() {
    Date date1 (5, 8, 2025), date2 (5, 8, 2025); // creat date1 object from Date class

    // Display initial date
    date1.displayDate();

    // Change the day value for date2
    date2.setDay(30);
    date2.displayDate();

    return 0;
}