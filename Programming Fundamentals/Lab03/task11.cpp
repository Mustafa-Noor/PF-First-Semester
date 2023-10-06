#include <iostream>
using namespace std;
int main()
{
	cout <<"Enter the current world population: ";
	float population;
	cin >> population;
	cout <<"Enter the monthly birth rate (number of births per month): ";
	float births;
	cin >> births;
	float newPopulation;
	newPopulation = (births*12*30)+population;
	cout <<"The population in three decades will be: "<< newPopulation;
}