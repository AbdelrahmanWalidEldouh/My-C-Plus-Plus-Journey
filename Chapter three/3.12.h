// Date.h
#include <iostream>
#include <string>

// Class Date stores a day, month, and year.
// Provides set/get functions to manipulate and retrieve this information.
class Date {
      public:
                // Initializes day, month, and year with validation
                Date (int initialDay, int initialMonth, int initialYear)
                {
                    // Validate that the values for the year and day are correct, but
                    // ensure that the month value is in the range 1–12, if it isn’t
                    // set the month to 1
                    if (initialDay > 0) { day = initialDay; } // Validate the day
                    if (initialYear > 0) { year = initialYear; } // Validate the year
                    // Validate the month value
                    if (initialMonth > 0) {
                      if (initialMonth < 13) { month = initialMonth; } 
                      }
                } // End constractor 

                // Set and retrieve the day
                void setDay (int d) { day = d; }
                int getDay () const { return day; }

                // Set and retrieve the month
                void setMonth (int m) { month = m; }
                int getMonth () const { return month; }

                // Set and retrieve the year
                void setYear (int y) { year = y; }
                int getYear () const { return year; }

                // display the month, day and year separated by forward slashes (/)
                void displayDate () {
                    std::cout << "Date is: " << day << " / " << month << " / "
                     << year << "\n"; 
                }

      
      private:
                int day;         // stores the day
                int month{1};    // stores the month
                int year;        // stores the year
    
};