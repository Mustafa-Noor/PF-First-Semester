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
void printenemy6();
void removeHero();
void removeEnemy1();
void removeEnemy2();
void removeEnemy3();
void removeEnemy4();
void removeEnemy5();
void removeEnemy6();
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
void moveEnemy4();
void moveEnemy5();
void moveEnemy6();
void moveHeroleft();
void moveHeroright();
void moveHeroup();
void moveHerodown();
void hp();
void powerup();

int px=17, py=15, ex1=90, ey1=4, ex2=4, ey2=4, ex3=33, ey3=27, ex4=91, ey4=12, ex5=85, ey5=25, ex6=37, ey6=18, hx=46, hy=4;
int contact1=0, contact2=0, contact3=0, contact4=0;
int contact5=0, contact6=0;
int health=100;

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
    printenemy6();
    powerup();
    while(true){
        Sleep(100);

        if (GetAsyncKeyState(VK_LEFT))
        {
            moveHeroleft();
            hp();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveHeroright();
            hp();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveHeroup();
            hp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveHerodown();
            hp();
            
        }

        
        moveEnemy1();
        
        moveEnemy2();
        
        moveEnemy3();
        
        moveEnemy4();
       
        moveEnemy5(); 

        moveEnemy6();

        
    
    if (px == hx && py >= hy && py <= hy + 2) {
            health = 200;
            hp();
            }
        }
    void powerup();
    void hp();

}
  







void printmaze()
{
    cout << "################################################################################################" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                          #########                                           #" << endl;
    cout << "#                                          ##     ##                                           #" << endl;
    cout << "#                                          ##     ##                                           #" << endl;
    cout << "#                                          ##     ##                                           #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#######################              ###########################################################" << endl;
    cout << "#                     #                                    #                                   #" << endl;
    cout << "#                     #                                    #                                   #" << endl;
    cout << "#                     #                                    #                                   #" << endl;
    cout << "#                     #                                    #                                   #" << endl;
    cout << "#                     #                                    #                                   #" << endl;
    cout << "#                     #                                    #                                   #" << endl;
    cout << "#              ########                                    #                                   #" << endl;
    cout << "#                                                          #                                   #" << endl;
    cout << "#                                                         ###                                  #" << endl;
    cout << "#                                   ###                                                        #" << endl;
    cout << "#                                    #                                                         #" << endl;
    cout << "#                                    #                                                         #" << endl;
    cout << "#                                    #                                                         #" << endl;
    cout << "#                                    #                                                         #" << endl;
    cout << "#                                    #                                                         #" << endl;
    cout << "#                                    #                                                         #" << endl;
    cout << "#                                    #                                                         #" << endl;
    cout << "#                                    #                                                         #" << endl;
    cout << "################################################################################################" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "################################################################################################" << endl;

}



void powerup(){
    gotoxy(hx,hy);
    cout << " H  ";
    gotoxy(hx,hy+1);
    cout << " H  ";
    gotoxy(hx,hy+2);
    cout << " H  ";
    

    
}
void hp() {
    
    
    gotoxy(5, 31);
    cout << "Health: " << health;
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

void printenemy6()
{
    gotoxy(ex6, ey6);
    cout <<" _ " ;
    gotoxy(ex6,ey6+1);
    cout <<"(=)" ;
    gotoxy(ex6,ey6+2);
    cout <<"#^#" ;
}

void removeHero(){
    gotoxy(px, py);
    cout <<"   " ;
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

void removeEnemy6(){
    gotoxy(ex6, ey6);
    cout <<"   " ;
    gotoxy(ex6,ey6+1);
    cout <<"   " ;
    gotoxy(ex6,ey6+2);
    cout <<"   " ;
}

void moveEnemy1(){
   
    removeEnemy1();
    if(contact1==0){
    ey1=ey1+1;}
    if(ey1==9){
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
 
    if(ey2==8){
        contact2=0;
    }
    printenemy2();


    }

void moveEnemy3(){
    removeEnemy3();
    if(contact3==0){
    ex3=ex3-1;}
    if(ex3==1){
        contact3=1;
    }
    if(contact3==1){
        ex3=ex3+1;
    }
 
    if(ex3==33){
        contact3=0;
    }
    printenemy3();


    }



void moveEnemy4(){
    removeEnemy4();
    if(contact4==0){
    ex4=ex4-1;}
    if(ex4==60){
        contact4=1;
    }
    if(contact4==1){
        ex4=ex4+1;
    }
 
    if(ex4==91){
        contact4=0;
    }
    printenemy4();


    }

void moveEnemy5(){
    removeEnemy5();
    if(contact5==0){
    ey5=ey5+1;}
    if(ey5==27){
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

void moveEnemy6(){
    removeEnemy6();
    if(contact6==0){
    ey6=ey6-1;
    ex6=ex6+3;}
    if(ey6==11){
        contact6=1;
    }
    if(contact6==1){
        ey6=ey6+1;
        ex6=ex6-3;
    }
 
    if(ey6==18){
        contact6=0;
    }
    printenemy6();


    }    

void moveHeroleft(){
    if (getCharAtxy(px-2,py) == ' ' && getCharAtxy(px-2,py+1) == ' ' && getCharAtxy(px-2,py+2) == ' '){
    removeHero();
    px = px-1;
    printhero();
    }
}

void moveHeroright(){
    if (getCharAtxy(px+4,py) == ' ' && getCharAtxy(px+4,py+1) == ' ' && getCharAtxy(px+4,py+2) == ' '){

    removeHero();
    px = px+1;
    printhero();
    }

    if(getCharAtxy(px+4,py) == 'H' || getCharAtxy(px+4,py+1) == 'H' || getCharAtxy(px+4,py+2) == 'H'){
    removeHero();
    px = px+1;
    printhero();
    }
    
}

void moveHeroup(){
    if (getCharAtxy(px,py-1) == ' ' && getCharAtxy(px-1,py-1) == ' ' && getCharAtxy(px+3,py-1) == ' '){
    removeHero();
    py=py-1;
    printhero();
    }
}

void moveHerodown(){
    if (getCharAtxy(px,py+3) == ' ' && getCharAtxy(px-1,py+3) == ' ' && getCharAtxy(px+3,py+3)== ' ' && getCharAtxy(px+1,py+3) == ' '){
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