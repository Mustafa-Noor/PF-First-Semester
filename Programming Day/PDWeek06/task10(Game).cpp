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
void printfire();
void removefire();
void movefire();
void enemydata();

int px=17, py=15, ex1=90, ey1=4, ex2=4, ey2=4, ex3=33, ey3=27, ex4=91, ey4=12, ex5=85, ey5=25, ex6=37, ey6=18, hx=46, hy=4;
int contact1=0, contact2=0, contact3=0, contact4=0;
int contact5=0, contact6=0;
int health=100;
int bx=px+5;
int by=py+1;
bool bulletActive=false;
char bulletDir='r';
bool checkFirstEnemy=true, checkSecondEnemy=true, checkThirdEnemy=true, checkFourthEnemy=true, checkFifthEnemy=true, checkSixthEnemy=true;

int countForE1=0;


int enemy1=100, enemy2=100, enemy3=100, enemy4=100, enemy5=100 , enemy6=100;


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

        if(enemy1<=0)
        {
            
            checkFirstEnemy=false;
        }
        if(enemy2<=0)
        {
            checkSecondEnemy=false;
        }
        if(enemy3<=0)
        {
            checkThirdEnemy=false;
        }
        if(enemy4<=0)
        {
            enemy4=0;
            checkFourthEnemy=false;
        }
        if(enemy5<=0)
        {
            checkFifthEnemy=false;
        }
        if(enemy6<=0)
        {
            checkSixthEnemy=false;
        }

        if (GetAsyncKeyState(VK_LEFT))
        {
            moveHeroleft();
            hp();
            enemydata();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveHeroright();
            hp();
            enemydata();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveHeroup();
            hp();
            enemydata();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveHerodown();
            hp();
            enemydata();
            
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            if (!bulletActive)
            {
                bx = px + 5; 
                by = py + 1;
                bulletActive = true;

                bulletDir='r';
            }

        }
        if (GetAsyncKeyState(VK_SHIFT))
        {
            if (!bulletActive)
            {
                bx = px - 2; 
                by = py + 1;
                bulletActive = true;
                bulletDir='l';
            }
        }

        if (bulletActive)
        {
            movefire();
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
    cout << "#                                   |              |                                           #" << endl;
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
    
    
    gotoxy(38, 31);
    cout << "Health: " << health;
}

void enemydata()
{
    gotoxy(1,32);
    cout << "Enemy1: " << enemy1;
    gotoxy(16,32);
    cout << "Enemy2: " << enemy2;
    gotoxy(32,32);
    cout << "Enemy3: " << enemy3;
    gotoxy(48,32);
    cout << "Enemy4: " << enemy4;
    gotoxy(64,32);
    cout << "Enemy5: " << enemy5;
    gotoxy(80,32);
    cout << "Enemy6: " << enemy6;

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
    cout <<" @ " ;
    gotoxy(ex1,ey1+1);
    cout <<"@@@" ;
    gotoxy(ex1,ey1+2);
    cout <<"@@@" ;
}

void printenemy2()
{
    gotoxy(ex2, ey2);
    cout <<" $ " ;
    gotoxy(ex2,ey2+1);
    cout <<"$$$" ;
    gotoxy(ex2,ey2+2);
    cout <<"$$$" ;
}

void printenemy3()
{
    gotoxy(ex3, ey3);
    cout <<" & " ;
    gotoxy(ex3,ey3+1);
    cout <<"&&&" ;
    gotoxy(ex3,ey3+2);
    cout <<"&&&" ;
}

void printenemy4()
{
    gotoxy(ex4, ey4);
    cout <<" * " ;
    gotoxy(ex4,ey4+1);
    cout <<"***" ;
    gotoxy(ex4,ey4+2);
    cout <<"***" ;
}


void printenemy5()
{
    gotoxy(ex5, ey5);
    cout <<"  8  " ;
    gotoxy(ex5,ey5+1);
    cout <<"88888" ;
    gotoxy(ex5,ey5+2);
    cout <<"88888" ;
    gotoxy(ex5,ey5+3);
    cout <<" 8 8 " ;

}

void printenemy6()
{
    gotoxy(ex6, ey6);
    cout <<" % " ;
    gotoxy(ex6,ey6+1);
    cout <<"%%%" ;
    gotoxy(ex6,ey6+2);
    cout <<"%%%" ;
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
    if(checkFirstEnemy)
    {
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
}

void moveEnemy2(){
    removeEnemy2();
    if(checkSecondEnemy)
    {
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


    }

void moveEnemy3(){
    removeEnemy3();
    if(checkThirdEnemy)
    {
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


}



void moveEnemy4(){
    removeEnemy4();
    if(checkFourthEnemy)
    {
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


    }

void moveEnemy5(){
    removeEnemy5();
    if(checkFifthEnemy)
    {
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


    }

void moveEnemy6(){
    removeEnemy6();
    if(checkSixthEnemy)
    {
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


void printfire()
{
    gotoxy(px+5,py+1);
    {
        cout << "o";
    }
}

void removefire()
{
    gotoxy(bx, by);
    cout << " ";
}

void movefire()
{
    removefire();

    if (bulletDir == 'r')
    {
        if (getCharAtxy(bx + 3, by) != '#')
        {
            bx += 3; // Move right
        }
        else
        {
            bulletActive = false;
        }
    }
    else
    {
        if (getCharAtxy(bx - 3, by) != '#')
        {
            bx -= 3; // Move left
        }
        else
        {
            bulletActive = false;
        }
    }

    if(getCharAtxy(bx,by) == '@')
    {
        enemy1-=50;
        bulletActive = false; // Bullet should be inactive after hitting an enemy
        removefire();
        
    }

    if(getCharAtxy(bx,by)=='$')
    {
        enemy2-=50;
        bulletActive=false;
        removefire();
    }

    if(getCharAtxy(bx,by)=='&')
    {
        enemy3-=50;
        bulletActive=false;
        removefire();
    }

    if(getCharAtxy(bx,by)=='*')
    {
        enemy4-=50;
        bulletActive=false;
        removefire();
    }

    if(getCharAtxy(bx,by)=='8')
    {
        enemy5-=50;
        bulletActive=false;
        removefire();
    }

    if(getCharAtxy(bx,by)=='%')
    {
        enemy6-=50;
        bulletActive=false;
        removefire();
    }

    // Check if the bullet has hit an enemy or reached the right edge of the screen
    if (getCharAtxy(bx, by) == '#' || bx >= 97 || getCharAtxy(bx+1,by)=='#' || getCharAtxy(bx-1,by)=='#' || bx<=0 || getCharAtxy(bx+2,by)=='#' || getCharAtxy(bx+3,by)=='#' || getCharAtxy(bx-2,by)=='#' || getCharAtxy(bx-3,by)=='#')
    {
        bulletActive = false;
        removefire();
    }
    else
    {
        gotoxy(bx, by);
        cout << "o";
    }
}



void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}