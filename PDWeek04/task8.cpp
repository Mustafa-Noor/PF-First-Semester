#include <iostream>
using namespace std;
void pet(int holidays);
main()
{
	int holiday;
	cout << "Holidays: ";
	cin >> holiday;
	pet (holiday);
}
void pet (int holidays)
{
	int workingDays;
	workingDays = 365-holidays;
	float timeforgames;
	timeforgames = (workingDays*63)+(holidays*127);
	int difnorm;

	if (timeforgames<=30000){
	difnorm = 30000-timeforgames;
	int mintohours;
	mintohours = difnorm/60;
	int mintomin;
	mintomin = difnorm%60;
	cout << "Tom sleeps well" << endl;
	cout << mintohours << " hours and " << mintomin << " minutes less for play";
	}

	if (timeforgames>30000){
	difnorm = timeforgames-30000;
	int mintohours;
	mintohours = difnorm/60;
	int mintomin;
	mintomin = difnorm%60;
	cout << "Tom will run away" << endl;
	cout << mintohours << " hours and " << mintomin << " minutes for play";
	}
}

	
	
	
	
	
