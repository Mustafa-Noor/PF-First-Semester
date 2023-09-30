#include <iostream>
using namespace std;
void longestTime(int h, int m);
main() 
{
	int hours;
	cout << "Enter the number of hours: ";
	cin >> hours;
	int min;
	cout << "Enter the number of minutes: ";
	cin >> min;
	longestTime(hours, min);
}
void longestTime(int h, int m)
{
	if (h*60>m){
	cout << h;
	}
	if (h*60<m){
	cout << m;
	}
}