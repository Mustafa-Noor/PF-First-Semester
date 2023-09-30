#include <iostream>
using namespace std;
int main()
{
	cout <<"Enter your age in years: ";
	float age;
	cin >> age;
	float day;
	day = age*365;
	cout <<"Your age in days is approximately " << day << " days.";
}