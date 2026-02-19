// Bar-Chart Printing Program
 #include <iostream>
 using namespace std;

 int main() {
    cout << "Enter five numbers between 1 and 9:";
    int number;
    for(int j{1}; j <= 5; j++) {
    cin >> number;

    if(number < 1 || number > 9) {
        cout << "Invalid number, please enter 1-9:" << endl;
        j--;
        continue;
    }

    for(int k{1}; k <= 2; k++) {
     for(int i{1}; i <= number; i++) {
        cout << number;
     }
      
     cout << endl;
    }
}
}