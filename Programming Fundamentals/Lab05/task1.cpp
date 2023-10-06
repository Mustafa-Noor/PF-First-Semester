#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	
	cout << "The minimum of " << num1 << " and " << num2 << " is: " << min(num1, num2);
	return 0;
}