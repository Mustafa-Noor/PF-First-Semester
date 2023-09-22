#include <iostream>
using namespace std;
int main ()
{
	cout <<"Number of Minutes: ";
	float min;
	cin >> min;
	cout <<"Frames per Second: ";
	float fpersec;
	cin >> fpersec;
	float fmin;
	fmin = fpersec*60;
	float totalFrames;
	totalFrames = fmin*min;
	cout <<"Total Number of Frames: " << totalFrames ;
}
