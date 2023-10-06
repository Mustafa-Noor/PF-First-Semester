#include <iostream>
using namespace std;
void evenOrOdd(int num);
main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	evenOrOdd(number);
}

void evenOrOdd(int num)
{
	if (num%2 == 0){
	cout << "Number " << num << " is even";
	}
	
	if (num%2 != 0){
	cout << "Number " << num << " is odd";
	}
}
	
	

