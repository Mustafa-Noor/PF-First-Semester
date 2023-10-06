#include <iostream>
using namespace std;
string torf(int a, int b, int c);
main()
{
	string res;
	int number;
	cout << "Enter a three-digit number: ";
	cin >> number;
	int a, b, c, res1, res2;
	a = number%10;
	res1 = number/10;
	b = res1%10;
	res2 = res1/10;
	c = res2%10;
	res= torf(a, b, c);
	cout << res;
}
string torf(int a, int b, int c)
{
	string resf;

	if(a==c){
	resf= "The number is symmetrical.";
	}

	if(a!=c){
	resf="The number is not symmetrical.";
	}
	return resf;
}

	
	
	
	
	
