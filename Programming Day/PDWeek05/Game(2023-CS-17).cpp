#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y);
void printmaze();
void printhero();
void printenemy1();
void printenemy2();
void printenemy3();
void printenemy4();
void printenemy5();
void removeHero();
void removeEnemy1();
void removeEnemy2();
void removeEnemy3();
void removeEnemy4();
void removeEnemy5();
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
void moveEnemy4();
void moveEnemy5();
void moveHeroleft();
void moveHeroright();
void moveHeroup();
void moveHerodown();

int px=46, py=4, ex1=90, ey1=4, ex2=4, ey2=4, ex3=5, ey3=14, ex4=89, ey4=14, ex5=85, ey5=25;
int contact1=0, contact2=0, contact3=0, contact4=0;
int contact5=0;

char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}


int main()
{
    system("cls");
    printmaze();
    printhero();
    printenemy1();
    printenemy2();
    printenemy3();
    printenemy4();
    printenemy5();
    while(true){

        if (GetAsyncKeyState(VK_LEFT))
        {
            moveHeroleft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveHeroright();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveHeroup();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveHerodown();
            
        }
        
        moveEnemy1();
        Sleep(30);
        
        moveEnemy2();
        Sleep(30);
        
        moveEnemy3();
        Sleep(30);
        
        moveEnemy4();
        Sleep(30);
       
        moveEnemy5(); 
        Sleep(30);
    }
  
}






void printmaze()
{
    cout << "################################################################################################" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                             #####                          #####                             #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "###################################                          ###################################" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "###################################                          ###################################" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "################################################################################################" << endl;

}

void printhero()
{
    gotoxy(px, py);
    cout <<" o  " ;
    gotoxy(px,py+1);
    cout <<"/|\\" ;
    gotoxy(px,py+2);
    cout <<"/ \\" ;
}


void printenemy1()
{
    gotoxy(ex1, ey1);
    cout <<" ' " ;
    gotoxy(ex1,ey1+1);
    cout <<"#=#" ;
    gotoxy(ex1,ey1+2);
    cout <<"#^#" ;
}

void printenemy2()
{
    gotoxy(ex2, ey2);
    cout <<" _ " ;
    gotoxy(ex2,ey2+1);
    cout <<"(=)" ;
    gotoxy(ex2,ey2+2);
    cout <<"#^#" ;
}

void printenemy3()
{
    gotoxy(ex3, ey3);
    cout <<" ' " ;
    gotoxy(ex3,ey3+1);
    cout <<"#=#" ;
    gotoxy(ex3,ey3+2);
    cout <<"#^#" ;
}

void printenemy4()
{
    gotoxy(ex4, ey4);
    cout <<" _ " ;
    gotoxy(ex4,ey4+1);
    cout <<"(=)" ;
    gotoxy(ex4,ey4+2);
    cout <<"#^#" ;
}


void printenemy5()
{
    gotoxy(ex5, ey5);
    cout <<"  #  " ;
    gotoxy(ex5,ey5+1);
    cout <<"##=##" ;
    gotoxy(ex5,ey5+2);
    cout <<"##^##" ;
    gotoxy(ex5,ey5+3);
    cout <<" # # " ;

}

void removeHero(){
    gotoxy(px, py);
    cout <<"    " ;
    gotoxy(px,py+1);
    cout <<"    " ;
    gotoxy(px,py+2);
    cout <<"    " ;

}


void removeEnemy1(){
    gotoxy(ex1, ey1);
    cout <<"   " ;
    gotoxy(ex1,ey1+1);
    cout <<"   " ;
    gotoxy(ex1,ey1+2);
    cout <<"   " ;
}

void removeEnemy2(){
    gotoxy(ex2, ey2);
    cout <<"   " ;
    gotoxy(ex2,ey2+1);
    cout <<"   " ;
    gotoxy(ex2,ey2+2);
    cout <<"   " ;
}

void removeEnemy3(){
    gotoxy(ex3, ey3);
    cout <<"   " ;
    gotoxy(ex3,ey3+1);
    cout <<"   " ;
    gotoxy(ex3,ey3+2);
    cout <<"   " ;
}

void removeEnemy4(){
    gotoxy(ex4, ey4);
    cout <<"   " ;
    gotoxy(ex4,ey4+1);
    cout <<"   " ;
    gotoxy(ex4,ey4+2);
    cout <<"   " ;
}

void removeEnemy5(){
    gotoxy(ex5, ey5);
    cout <<"     " ;
    gotoxy(ex5,ey5+1);
    cout <<"     " ;
    gotoxy(ex5,ey5+2);
    cout <<"     " ;
    gotoxy(ex5,ey5+3);
    cout <<"     " ;
}

void moveEnemy1(){
   
    removeEnemy1();
    if(contact1==0){
    ey1=ey1+1;}
    if(ey1==8){
        contact1=1;
    }
    if(contact1==1){
        ey1=ey1-1;
    }
 
    if(ey1==1){
        contact1=0;
    }


    printenemy1();
}

void moveEnemy2(){
    removeEnemy2();
    if(contact2==0){
    ey2=ey2-1;}
    if(ey2==0){
        contact2=1;
    }
    if(contact2==1){
        ey2=ey2+1;
    }
 
    if(ey2==7){
        contact2=0;
    }
    printenemy2();


    }

void moveEnemy3(){
    removeEnemy3();
    if(contact3==0){
    ey3=ey3+1;}
    if(ey3==18){
        contact3=1;
    }
    if(contact3==1){
        ey3=ey3-1;
    }
 
    if(ey3==11){
        contact3=0;
    }
    printenemy3();


    }



void moveEnemy4(){
    removeEnemy4();
    if(contact4==0){
    ey4=ey4-1;}
    if(ey4==10){
        contact4=1;
    }
    if(contact4==1){
        ey4=ey4+1;
    }
 
    if(ey4==17){
        contact4=0;
    }
    printenemy4();


    }

void moveEnemy5(){
    removeEnemy5();
    if(contact5==0){
    ey5=ey5+1;}
    if(ey5==30){
        contact5=1;
    }
    if(contact5==1){
        ey5=ey5-1;
    }
 
    if(ey5==21){
        contact5=0;
    }
    printenemy5();


    }

void moveHeroleft(){
    if (getCharAtxy(px-1,py) == ' ' ){
    removeHero();
    px = px-1;
    printhero();
    }
}

void moveHeroright(){
    if (getCharAtxy(px+4,py) == ' ' ){

    removeHero();
    px = px+1;
    printhero();
    }
}

void moveHeroup(){
    if (getCharAtxy(px,py-1) == ' ' ){
    removeHero();
    py=py-1;
    printhero();
    }
}

void moveHerodown(){
    if (getCharAtxy(px,py+3) == ' ' ){
    removeHero();
    py=py+1;
    printhero();
    }
}


void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}