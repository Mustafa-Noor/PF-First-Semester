#include <iostream>
using namespace std;
int main ()
{
	cout << "Enter a 4-digit number: ";
	int digit;
	cin >> digit;
	int a;
	a = digit%10;
	int thr_digit;
	thr_digit = digit/10;
	int b;
	b = thr_digit%10;
	int two_digit;
	two_digit = thr_digit/10;
	int c;
	c = two_digit%10;
	int one_digit;
	one_digit = two_digit/10;
	int d;
	d =one_digit%10;
	int final;
	final = a+b+c+d;
	cout << "Sum of the individual digits: " << final ;
}
	
	