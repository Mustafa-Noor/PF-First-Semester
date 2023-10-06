#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the length of the rectangle: ";
	float length;
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	float width;
	cin >> width;
	float area;
	area = length*width;
	cout << "The area of the rectangle is: " << area << endl;
}