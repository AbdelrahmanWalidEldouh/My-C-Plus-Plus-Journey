#include <iostream>
using namespace std;

void solveHanoi(int n, int source, int destination, int temp) {
    
    if (n == 1) {
        cout << source << " -> " << destination << endl;
        return; 
    }

    solveHanoi(n - 1, source, temp, destination);

    cout << source << " -> " << destination << endl;

    solveHanoi(n - 1, temp, destination, source);
}

int main() {
    int disks;
    cout << "Enter the number of disks: ";
    cin >> disks;

    cout << "The sequence of moves is:" << endl;
    
    solveHanoi(disks, 1, 3, 2);

    return 0;
}