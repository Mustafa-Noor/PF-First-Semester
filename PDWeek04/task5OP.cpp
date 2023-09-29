#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printname();
main()
{	system("cls");
	int x=10, y=10;
	gotoxy(10,10);
	cout << "MUSTAFA";
	gotoxy(20,20);	
}
void gotoxy(int x, int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
		
