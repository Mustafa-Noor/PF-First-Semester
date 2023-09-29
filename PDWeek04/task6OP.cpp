#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void h();
void a1();
void a2();
void s1();
void s2();
void n();
main()
{
	system("cls");
	h();
	a1();
	s1();
	s2();
	a2();
	n();
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void h()
{	
	gotoxy(15,15);
	cout << "H";
	
}
void a1()
{	gotoxy(15,16);
	cout << "A";
	
}
void s1()
{
	gotoxy(15,17);
	cout << "S";
	
}
void s2()
{     gotoxy(15,18);  
      cout << "S";
	
}
void a2()
{	gotoxy(15,19);
	cout << "A";
	
}
	
void n()
{	gotoxy(15,20);
	
	cout << "N";
	
}
	