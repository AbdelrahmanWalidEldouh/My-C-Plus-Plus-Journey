// Factorials
 #include <iostream>
 using namespace std;

 int main() {
    
    long factorial{1};
    for(int i{1}; i <= 20; i++) {
        factorial *= i;
        cout << i << "\t" << factorial << endl;
    }
 }