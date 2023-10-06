#include <iostream>
using namespace std;
int main ()
{
	cout << "Enter the number of hours: ";
	float hours;
	cin >> hours;
	float seconds;
	seconds = hours*3600;
	cout << hours <<" hours is equivalent to " << seconds <<" seconds.";
} 