#include<iostream>
using namespace std;
float volume(float l, float w, float h, string unit);
main()
{
	float l, w, h;
	string unit;
	cout << "Enter the length of the pyramid (in meters): ";
	cin >> l;
	cout << "Enter the width of the pyramid (in meters): ";
	cin >> w;
	cout << "Enter the height of the pyramid (in meters): ";
	cin >> h;
	cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin >> unit;
	float result;
	result = volume(l, w, h, unit);
	cout << "The volume of the pyramid is: " << result << " cubic " << unit;
}

float volume(float l, float w, float h, string unit)
{
	float vol;
	vol = (l*w*h)/3;

	if(unit=="millimeters"){
	vol = vol*(1000000000);
	}

	if(unit=="centimeters"){
	vol = vol*(1000000);
	}

	if(unit=="kilometers"){
	vol = vol/(1000000000);
	}

	return vol;
}
	
