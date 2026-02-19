// Find the Smallest Value
 #include <iostream>
 using namespace std;

 int main() {
    int vNumber;
    cout << "Enter number of values: ";
    cin >> vNumber;
    cout << "\n";

    int number;
    cout << "Enter value: ";
    cin >> number;
    
    int smallest = number;
    for(int i{1}; i < vNumber; i++) {
        cout << "Enter value: ";
        cin >> number; 
      
        if(number < smallest) {
            smallest = number;
        }
    }
     cout << "\nSmallest: " << smallest;
 }