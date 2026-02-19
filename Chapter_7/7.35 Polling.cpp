#include <iostream>
#include <iomanip>
#include <string>
#include <array>

using namespace std;

int main() {
   array<string, 5> topics{ "Global Warming", "Education Quality", "Data Privacy",
                            "Public Healthcare", "AI Ethics" };
   array<array<int, 10>, 5> responses{};

   int responsesCount{0};
   char choice{ 'y' };

   while ( choice == 'y' || choice == 'Y' ) {
      cout << "Pleas rate the following issues from 1 (lest imprtant) to 10 (most important):\n";
      
      for ( size_t i{ 0 }; i < topics.size(); ++i ) {
        int rating;
        do {
            cout << topics[ i ] << ": ";
            cin >> rating;

        } while ( rating < 1 || rating > 10 );

        ++responses[ i ][ rating - 1 ];
   }

   ++responsesCount;

   cout << "\nIs ther another respondent? (y/n): ";
   cin >> choice;
   cout << endl;
}

   cout << left << setw(20) << "Topic"; 
   for (int i = 1; i <= 10; ++i) cout << setw(4) << i;
   cout << "Average" << endl;

   int highestTotal{0}, lowestTotal{1000000};
   string highestTopic, lowestTopic;

   for (size_t i{0}; i < topics.size(); ++i) {
      cout << left << setw(20) << topics[i];
      
      int totalPoints{0};

      for (size_t j{0}; j < 10; ++j) {
         cout << setw(4) << responses[i][j];
         
         totalPoints += (responses[i][j] * (j + 1));
      }

      double average = static_cast<double>(totalPoints) / responsesCount;
      cout << fixed << setprecision(2) << setw(8) << average << endl;

      if (totalPoints > highestTotal) {
         highestTotal = totalPoints;
         highestTopic = topics[i];
      }
      if (totalPoints < lowestTotal) {
         lowestTotal = totalPoints;
         lowestTopic = topics[i];
      }
   }

   cout << "\nHighest points: " << highestTopic << " (" << highestTotal << " points)" << endl;
   cout << "Lowest points:  " << lowestTopic << " (" << lowestTotal << " points)" << endl;

   return 0;
}