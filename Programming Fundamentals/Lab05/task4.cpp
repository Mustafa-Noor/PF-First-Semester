#include <iostream>
#include <cmath>
float length(float dis, float deg);
using namespace std;
main()
{
	float distance;
	float angle;
	cout << "Enter the distance from the base of the tree (in feet): ";
	cin >> distance;
	
	cout << "Enter the angle of elevation (in degrees): ";
	cin >> angle;
	
	length(distance, angle);
}

float length(float dis, float deg)
{
	float rad, height;
	rad = deg/57.2958;
	height = dis*tan(rad);
	cout << "The height of the tree is: " << height << " feet";
}


	
	 

