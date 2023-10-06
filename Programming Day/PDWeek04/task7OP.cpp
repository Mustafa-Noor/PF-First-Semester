#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
void movePlayer(int x,int y);
main()
{
	int x = 3, y = 1;
	int contact=0;

	system("cls");
	printMaze();
	while (true)
	{
		if(contact==0)
		{
			y=y+1;
		}
		if(y>7){
			contact=1;	
		}
		if(contact==1){
			y=y-1;
		}
		if(y==1){
			contact=0;
		}
        movePlayer(x, y);
	}
}
void movePlayer(int x,int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(100);
	gotoxy(x,y);
	cout<<" ";
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printMaze()
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