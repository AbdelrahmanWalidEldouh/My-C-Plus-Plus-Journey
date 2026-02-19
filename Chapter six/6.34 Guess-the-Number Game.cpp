#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main() {
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> rnumber{1, 1000};

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        unsigned int secretNumber = rnumber(engine);
        unsigned int guess;

        cout << "\nI have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess: ";
        cin >> guess;

        while (guess != secretNumber) {
            if (guess < secretNumber) {
                cout << "Too low. Try again: ";
            } else {
                cout << "Too high. Try again: ";
            }
            cin >> guess;
        }

        cout << "\nExcellent! You guessed the number!" << endl;
        cout << "Would you like to play again (y or n)? ";
        cin >> playAgain;
    }

    cout << "Thank you for playing!" << endl;
    return 0;
}