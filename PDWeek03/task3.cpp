#include <iostream>
using namespace std;
int main() 
{
	cout << "Enter Initial Velocity (m/s): ";
	float initial;
	cin >> initial;
	cout << "Enter Acceleration (m/s^2): ";
	float accel;
	cin >> accel;
	cout << "Enter Time (s): ";
	float time;
	cin >> time;
	float final;
	final = (accel*time)+initial;
	cout << "Final Velocity (m/s): " << final ;
}