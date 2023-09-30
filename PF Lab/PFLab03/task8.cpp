#include <iostream>
using namespace std;
int main()
{
	cout << "Enter voltage (in volts): ";
	float volt;
	cin >> volt;
	cout << "Enter current (in amperes): ";
	float amp;
	cin >> amp;
	float power;
	power = volt*amp;
	cout << "The power is "<< power << " watts.";
}