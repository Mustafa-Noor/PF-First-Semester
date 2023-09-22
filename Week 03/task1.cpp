#include <iostream>
using namespace std;
int main ()
{
	cout <<"Enter the number of sides of the polygon: ";
	float n;
	cin >> n;
	float result;
	result = (n-2)*180;
	cout <<"The sum of internal angles of a " << n <<"-sided polygon is: " << result <<" degrees" ;
}