#include <iostream>
using namespace std;
int main ()
{
	cout << "Enter the person's age: ";
	int age;
	cin >> age;
	cout << "Enter the number of times they've moved: ";
	int move;
	cin >> move;
	int pro;
	pro = move+1;
	int final;
	final = age/pro;
	cout << "Average number of years lived in the same house: " << final ;
}