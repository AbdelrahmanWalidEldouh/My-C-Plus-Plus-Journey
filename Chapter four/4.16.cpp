/*
   1-
      Calculate and display the student's contribution for the fundraising initiative
            *******************************************************************
   2-
      Initialize variables

      Prompt and read inputs

      Calculate and display student's contribution and total contributions
            *******************************************************************
    3-
      Initialize student's laps completed to zero
      Initialize sponsorship rate
      Initialize student's contribution
      Initialize total contributions to zero

      Set output format to fixed with tow decimal places

      Prompt for student's laps
      Input student's laps

      While student's laps not equal to -1
        Prompt for sponsorship rate
        Input sponsorship rate

        If student's laps is les than or equal to 40 USD
          student's contriprtion = student's laps * sponsorship rate
        Else
          student's contriprtion = 40 * sponsorship rate + (student's laps - 40)
                                   * sponsorship rate * 1.5
        
        Add student's contriprtion to total contriprtions

        Display student's contriprtion

        Prompt for student's laps
        Input student's laps
      End while
     
    Display total contriprtions
*/ 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int laps_completed{ 0 };
    double student_contribution{ 0 };
    double total_contributions{ 0 };

    cout << setprecision( 2 ) << fixed;

    cout << "Enter laps completed(-1 to end): ";
    cin >> laps_completed;

    while( laps_completed != -1 )
    {
        double rate{ 0 };
        cout << "Enter sponsorship rate: ";
        cin >> rate;

        if( laps_completed <= 40 )
        {
           student_contribution = laps_completed * rate;
        }
        else
        {
           student_contribution = 40 * rate + ( laps_completed - 40 ) * rate * 1.5;
                                                   
        }

        total_contributions += student_contribution;

        cout << "Student contribution is: " << student_contribution << endl;

        cout << "\nEnter laps completed(-1 to end): ";
        cin >> laps_completed;
    }

     cout << "Total funds raised: " << total_contributions;
}