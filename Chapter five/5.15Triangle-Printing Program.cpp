// Triangle-Printing Program
 #include <iostream>
 using namespace std;

 int main() {
    cout << "*\n";
    for(int i{1}; i <= 2; i++) {
        cout << "*";
    }
    cout << "\n";
    for(int i{1}; i <= 3; i++) {
        cout << "*";
    }
    cout << "\n";
    for(int i{1}; i <= 4; i++) {
        cout << "*";
    }
    cout << "\n";
    for(int i{1}; i <= 5; i++) {
        cout << "*";
    }
    cout << "\n";
    for(int i{1}; i <= 6; i++) {
        cout << "*";
    }
    cout << "\n";
    for(int i{1}; i <= 7; i++) {
        cout << "*";
    }
    cout << "\n";
    for(int i{1}; i <= 8; i++) {
        cout << "*";
    }
    cout << "\n";
    for(int i{1}; i <= 9; i++) {
        cout << "*";
    }
    cout << "\n";
    for(int i{1}; i <= 10; i++) {
        cout << "*";
    }
    cout << "\n";


    for(int j{10}; j >= 1; j--) {
        for(int k{j}; k >= 1; k--) {
         cout << "*";
        }
         cout << "\n";
    }


    for(int l{10}; l >= 1; l--) {

    // spaces
    for(int n{10 - l}; n >= 1; n--) {
        cout << " ";
    }

    // stars
    for(int m{l}; m >= 1; m--) {
        cout << "*";
    }

    cout << "\n";
  }
    
   for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10 - i; j++) {
            cout << ' ';
        }
        for (int k = 1; k <= i; k++) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;


 }
