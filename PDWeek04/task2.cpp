#include <iostream>
using namespace std;
void reverse(string x);
main()
{
	string tOrf;
	cout << "Enter 'true' or 'false': ";
	cin >> tOrf;
	reverse( tOrf );
}
void reverse(string x)
{
	if (x=="true"){
	cout << "false";
	}
	if (x=="false"){
	cout << "true";
	}
}
	
	