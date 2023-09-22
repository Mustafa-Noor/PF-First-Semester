#include <iostream>
using namespace std;
int main()
{	cout <<"Enter the name of the cricket team: ";
	string name;
	cin >> name;
	cout <<"Enter the number of wins: ";
	int wins;
	cin >> wins;
	cout <<"Enter the number of draws: ";
	int draw;
	cin >> draw;
	cout <<"Enter the number of losses: ";
	int lose;
	cin >> lose;
	int points;
	points = (wins*3)+(lose*0)+(draw*1);
	cout << name << " has obtained "<< points << " points in the Asia Cup tournament.";
} 