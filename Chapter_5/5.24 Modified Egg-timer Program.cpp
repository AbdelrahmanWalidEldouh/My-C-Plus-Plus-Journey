#include <iostream>
using namespace std;

int main() {
    int h{0};
    while(h == 0) {
        cout << "Enter an odd number in the range 1 to 29: ";
        cin >> h;
        if(h < 1 || h > 29 || h % 2 == 0)
            h = 0;
    } 

    for(int i{1}; i <= h; i++) {

        for(int j{1}; j <= h; j++) {

            if(i == 1 || i == h || j == 1 || j == h) {
                cout << "#";
            }
            
            else if((i <= (h + 1) / 2 && j >= i && j <= h + 1 - i) || (i > (h + 1) / 2 && j >= h + 1 - i && j <= i)) {
                cout << "*";
            }

            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}