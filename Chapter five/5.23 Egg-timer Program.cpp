#include <iostream>
using namespace std;

int main() {
    

    for(int i{1}; i <= 9; i++) {

        for(int j{1}; j <= 9; j++) {

            if(i == 1 || i == 9 || j == 1 || j == 9) {
                cout << "#";
            }
            
            else if((i <= 5 && j >= i && j <= 10 - i) || (i > 5 && j >= 10 - i && j <= i)) {
                cout << "*";
            }

            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}