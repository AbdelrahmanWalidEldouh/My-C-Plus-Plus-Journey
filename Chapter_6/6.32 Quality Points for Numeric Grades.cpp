#include<iostream>
#include<cmath>

using namespace std;

int qualityPoints(int);

int main()
{
	int studentGrade;
	cout <<  "Enter the student's averag (0 - 100): ";
	cin >> studentGrade;
	
	cout << "Quality points: " << qualityPoints(studentGrade);
}

int qualityPoints(int grade)
{
	switch(grade / 10)
	{
		case 10:
		case 9:
		  return 4;
		case 8:
		  return 3;
		case 7:
		  return 2;
		case 6:
	      return 1;
	    default:
	      return 0;
	}
}