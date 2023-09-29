#include <iostream>
using namespace std;
void tpChecker(int people, int rolls);
main()
{
	int persons;
	cout << "Number of people in the household: ";
	cin >> persons;
	int tPaper;
	cout << "Number of rolls of TP: ";
	cin >> tPaper;
	tpChecker(persons, tPaper);
}
void tpChecker(int people, int rolls)
{
	int days;
	days = (rolls*500)/(people*57);
	
	if(days<14){
	cout << "Your TP will only last " << days << " days, buy more!";
	}
	if(days>14){
	cout << "Your TP will last " << days << " days, no need to panic!";
	}
}
	