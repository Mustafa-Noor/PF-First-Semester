#include <iostream>
using namespace std;
int main ()
{
	cout << "Number of square meters you can paint: ";
	int sqMeters;
	cin >> sqMeters;
	cout << "Width of the single wall (in meters): ";
	int width;
	cin >> width;
	cout << "Height of the single wall (in meters): ";
	int height;
	cin >> height;
	int pro;
	pro = width*height;
	int final;
	final = sqMeters/pro;
	cout << "Number of walls you can paint: " << final ;
}
	
	
	