// Comparing two numbers
#include <iostream> // enables program to prform input and outout
using namespace std; // program uses names from the std namespace

// function main begins program execution
int main() {
	int x{0}; // declare first variable initialized to 0
	int y{0}; // declare second variable initialized to 0
	cout << "Enter two Numbers to compare: "; // prompt user for input
	cin >> x >> y; // read two integers from user
	if (x > y) {
	// if x is greater than y, print c is larger
		cout << x << " is larger";
	}
	if (y > x) {
	// if y is greater than x, print y is larger
		cout << y << " is larger";
	}
	if (x == y){
	// if x equal to y, print message
		cout << "These numbers are equal";}
}  // end function main
