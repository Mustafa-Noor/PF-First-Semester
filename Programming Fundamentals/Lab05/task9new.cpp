#include<iostream>
using namespace std;
void timeTravel(int hour,int mins);
main()
{
	int h, m;
	cout<<"Enter Hours: ";
	cin>>h;
	cout<<"Enter Minutes: ";
	cin>>m;
	timeTravel(h,m);
}
void timeTravel(int hours,int mins)
{
	mins=mins+15;
	if (mins>=60)
	{
		mins=mins-60;
		hours=hours+1;
	}
	if (hours>=24)
	{
		hours=0;
	}
	cout<<hours<<":"<<mins;
}	