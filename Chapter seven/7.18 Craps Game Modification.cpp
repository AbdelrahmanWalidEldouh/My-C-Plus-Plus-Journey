// Not solved
// Fig. 6.9: fig06_09.cpp
// Craps simulation.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned int rollDice();

int main() {
   enum class Status {CONTINUE, WON, LOST};

   srand(static_cast<unsigned int>(time(0)));

   const int totalGames{1000};
   int wins{0};
   int losses{0};

   for (int game{1}; game <= totalGames; ++game) {
       unsigned int myPoint{0};
       Status gameStatus;
       unsigned int sumOfDice{rollDice()};

       switch (sumOfDice) {
          case 7:
          case 11:
             gameStatus = Status::WON;
             break;
          case 2:
          case 3:
          case 12:             
             gameStatus = Status::LOST;
             break;
          default:
             gameStatus = Status::CONTINUE;
             myPoint = sumOfDice;
             cout << "Point is " << myPoint << endl;
             break; 
        }
   

       while (Status::CONTINUE == gameStatus) {
          sumOfDice = rollDice();

          if (sumOfDice == myPoint) { 
             gameStatus = Status::WON;
          }
          else {
             if (sumOfDice == 7) {
                gameStatus = Status::LOST;
             }
          }
       }

       if (Status::WON == gameStatus) {
          cout << "Player wins" << endl;
          ++wins;
       }
       else {
          cout << "Player loses" << endl;
          ++losses;
       }
    }

    cout << "\nAfter " << totalGames << " games:" << endl;
    cout << "Wins: " << wins << endl;
    cout << "Losses: " << losses << endl; 
}

unsigned int rollDice() {
   int die1{1 + rand() % 6};
   int die2{1 + rand() % 6};
   int sum{die1 + die2};

   cout << "Player rolled " << die1 << " + " << die2
      << " = " << sum << endl;
   return sum;
}