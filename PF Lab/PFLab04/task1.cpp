#include <iostream>
using namespace std;
void calculateFuel(float dis);
main() 
{
	float distance;
	cout << "Enter the distance: ";
	cin >> distance;	
	calculateFuel(distance);
}

void calculateFuel(float dis)
{   	
	
	
	float tFuel;
	tFuel = dis*10 ;
	cout << "Fuel needed: " << tFuel ;
}