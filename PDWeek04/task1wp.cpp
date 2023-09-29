#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int main()
{
	system("cls");
	cout << "Testing my Name";
	gotoxy(17,17);
	cout << "My name is Mustafa";
}