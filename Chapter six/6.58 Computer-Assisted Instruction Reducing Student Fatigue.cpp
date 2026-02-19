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
            int randomResponse = 1 + rand() % 4; 
            
            switch(randomResponse) {
                case 1: cout << "Very good!\n\n"; break;
                case 2: cout << "Excellent!\n\n"; break;
                case 3: cout << "Nice work!\n\n"; break;
                case 4: cout << "Keep up the good work!\n\n"; break;
            }
            correctAnswer = newQuestion();
        }
        else {
            int randomResponse = 1 + rand() % 4; 

            switch(randomResponse) {
                case 1: cout << "No. Please try again.\n"; break;
                case 2: cout << "Wrong. Try once more.\n"; break;
                case 3: cout << "Don't give up!\n"; break;
                case 4: cout << "No. Keep trying.\n"; break;
            }
        }
    }
}