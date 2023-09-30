#include <iostream>
using namespace std;
void add(int num1, int num2);
void multiply(int num1, int num2);
void subtract(int num1, int num2);
void divide(int num1, int num2);
main ()
{
	int n1, n2;
	char op;
	cout << "Enter 1st number: ";
	cin >> n1;
	cout << "Enter 2nd number: ";
	cin >> n2;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> op;

	if(op == '+'){
	add(n1,n2);
	}

	if(op == '*'){
	multiply(n1,n2);
	}

	if(op == '-'){
	subtract(n1,n2);
	}

	if(op == '/'){
	divide(n1,n2);
	}
}

void add(int num1, int num2)
{
	int sum;
	sum = num1+num2;
	cout << "Addition: " << sum ;
}

void multiply(int num1, int num2)
{
	int product;
	product = num1*num2;
	cout << "Multiplication: " << product ;
}

void divide(int num1, int num2)
{
	float division;
	division = num1/num2;
	cout << "Division: " << division ;
}

void subtract(int num1, int num2)
{
	int minus;
	minus = num1-num2;
	cout << "Subtraction: " << minus ;
}
	
	
	