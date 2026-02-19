#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int newQuestion() {
    int number1 = rand() % 10;
    int number2 = rand() % 10;

    cout << "How much is " << number1 << " times " << number2 << "?\n";

    return number1 * number2;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int correctAnswer;
    int studentAnswer;

    correctAnswer = newQuestion();

    while(true) {
        cin >> studentAnswer;

        if(studentAnswer == correctAnswer) {
            cout << "Very god!\n\n";

            correctAnswer = newQuestion();
        }
        else {
            cout << "No. Please try again.\n";
        }
    }
}