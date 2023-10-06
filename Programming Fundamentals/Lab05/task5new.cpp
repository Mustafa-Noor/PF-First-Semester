#include <iostream>
#include <cmath>
using namespace std;
float coeff(float a, float b,float c);
main()
{
	float a, b, c;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;
	coeff( a, b, c);
}
float coeff(float a, float b, float c)
{	
	float det, base, root1, root2;
	base = 2*a ;
	det = (b*b)-(4*a*c);
	
	if (det>0){
	root1 = ((-b)+sqrt(det))/(base);
	root2 = ((-b)-sqrt(det))/(base);
	cout << "Solutions: x = " << root1 << " and x = " << root2;
	}

	if (det==0){
	root1 = (-b)/base;
	cout << "Solution: x = " << root1;
	}

	if (det<0){
	float roota;
	roota = (-b)/base;
	root1 = sqrt(-(det))/(base);
	root2 = sqrt(-(det))/(base);
	cout << "Complex Solutions: x = " << roota << " + " << root1 << "i and x = " << roota << " - " << root2 << "i";
	}
}



	
	
	