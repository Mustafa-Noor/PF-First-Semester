#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your name: ";
	string name;
	cin >> name;

	cout << "Enter your roll number: ";
	int roll_no;
	cin >> roll_no;

	cout << "Enter your aggregate: ";
	float aggregate;
	cin >> aggregate;

	cout << "Enter your section: ";
	char section;
	cin >> section;

	cout << "Student Information:"<< endl << "Name: " << name << endl << "Roll Number: " << roll_no << endl <<"Aggregate: " << aggregate << endl << "Section: " << section << endl;
}	
	
	