#include <iostream>
using namespace std;
void passOrfail(int marks);
main()
{
	int number;
	
	cout << "Enter your score: ";
	cin >> number;
	passOrfail(number);
}

void passOrfail(int marks)
{
	if (marks>50){
	cout << "Pass";
	}
	if (marks<=50){
	cout << "Fail";
	}
}
