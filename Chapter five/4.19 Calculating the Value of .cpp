#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double pi{0};
	double term{0};
	int sign{1};
	int n{1};
	int counter{0};
	
	while(counter < 200000) {
		term = 4.0 / n;
		pi += term * sign;
		sign *= -1;
		n += 2;
        cout << counter << "\t" << pi << endl;
		counter++;
	
		if(static_cast<int>(pi * 100000) == 314159) {
		    cout << "Reached 3.14159 at term: " << counter << endl;
            break;
		}
		}
			
	cout << "Approximate pi: " << setprecision(10) << pi << endl;
}