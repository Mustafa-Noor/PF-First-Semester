#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void movePlayer(int x,int y);
main()
{	int contact = 0;
	int x = 3, y = 1;
	system("cls");
	printmaze();
	while (true)
	{
	if (contact = 0){
	y =y+1;
	

	if(y>7)
	{
	 contact=1;
	}
	if (contact=1){
	y = y-1;
	}
	movePlayer(x, y);
 }
}

void movePlayer(int x,int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(200);
	cout<<" ";
}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printmaze()
{
	cout << "########################" << endl;
	cout << "#                      #" << endl;
	cout << "#                      #" << endl;
	cout << "#                      #" << endl;
	cout << "#                      #" << endl;
	cout << "#                      #" << endl;
	cout << "#                      #" << endl;
	cout << "#                      #" << endl;
	cout << "########################" << endl;

}