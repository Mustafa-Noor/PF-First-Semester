#include <iostream>
using namespace std;
string checkA(char ch); 
main()
{
	char ch;
	string result;
	cout << "Enter a character (A/a): ";
	cin >> ch;
	result=checkA(ch);
	cout<<result;
}
string checkA(char ch)
{
	string res;
	if(ch=='a'){
	res="You have entered small a"  ;
	}
	if(ch=='A'){
	res="You have entered Capital A"  ;
	}
	return res;
}
	