#include <iostream>
using namespace std;
void calculateFuel(float distance);
main()
{
	float dis;
	cout << "Enter the distance: ";
	cin >> dis;
	calculateFuel(dis);
}

void calculateFuel(float distance)
{
	float fuel,answer;
	answer = distance*10;
	if (answer<=100){
	fuel = 100;
	}
	if (answer>100){
	fuel = answer;
	}
	cout << "Fuel needed: " << fuel ;
}
	