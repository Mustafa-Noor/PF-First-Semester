#include <iostream>
using namespace std;
void possibleBonus(int a, int b);
main ()
{
	int pos1;
	cout << "Enter your position: ";
	cin >> pos1;
	int pos2;
	cout << "Enter your friend's position: ";
	cin >> pos2;
	possibleBonus (pos1, pos2);
}
void possibleBonus(int a, int b)
{
	if (b-a <= 6){
	cout << "true";
	}
	if (b-a > 6){
	cout << "false";
	}
}
