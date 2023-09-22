#include <iostream>
using namespace std;
int main ()
{
	cout << "Enter Imposter Count: ";
	float i;
	cin >> i;
	cout << "Enter Player Count: ";
	float p;
	cin >> p;
	float chances;
	chances = (i/p)*100;
	cout <<"Chance of being an imposter: " << chances << "%";
}