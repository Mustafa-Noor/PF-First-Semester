#include <iostream>
using namespace std;
void isEqual(int x, int y);
main() 
{
	int n1;	
	cout << "Enter the first number: ";
	cin >> n1;
	int n2;
	cout << "Enter the second number: ";
	cin >> n2;
	isEqual(n1, n2);
}
void isEqual(int x, int y)
{
	if ( x==y){
	cout << "true";
	}
	if ( x!=y ){
	cout << "false";
	}
}