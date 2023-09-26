#include <iostream>
using namespace std;
void vote(int age);
main()
{
	int years;
	cout << "Enter your age: ";
	cin >> years;
	vote(years);
}
void vote(int age)
{
	if (age>=18){
	cout << "You are eligible to vote.";
	}
	if (age<18){
	cout << "You are not eligible to vote.";
	}
}
	