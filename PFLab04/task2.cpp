#include <iostream>
using namespace std;
void inchesToFeet(float inch);
main()
{
	float inches;
	cout << "Enter the measurement in inches: ";
	cin >> inches;
	inchesToFeet(inches);
}

void inchesToFeet(float inch)
{
	
	float ft;
	ft = inch/12;
	cout << "Equivalent in feet: " << ft ;
}
	