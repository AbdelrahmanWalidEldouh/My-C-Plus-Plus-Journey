#include<iostream>
#include<cstdlib>
using namespace std;

void rectangleOfAsterisks(int, int);

int main()
{
    rectangleOfAsterisks(10, 3);
}

void rectangleOfAsterisks(int width, int height) {
    for(int i{1}; i <= height; i++) {
        for(int j{1}; j <= width; j++) {
            cout << "*";
        }
        cout << endl;
    }
}