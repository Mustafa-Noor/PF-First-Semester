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
void moveEnemyBullet();
void printEnemyBullets();
void enemyShoot();
string printfrontpage();
void loadingScreen();
void level();
void header();
void finalLevel();
void finalmaze();
void printenemy7();
void printenemy8();
void removeEnemy7();
void removeEnemy8();
void moveEnemy7();
void moveEnemy8();
void gameover();

int px=17, py=15, ex1=90, ey1=4, ex2=4, ey2=4, ex3=33, ey3=27, ex4=91, ey4=12, ex5=85, ey5=25, ex6=37, ey6=18, hx=46, hy=4;
int ex7, ex8, ey7, ey8;
int contact1=0, contact2=0, contact3=0, contact4=0;
int contact5=0, contact6=0, contact7=0, contact8=0;
int health=100;
int bx=px+5;
int by=py+1;
bool bulletActive=false;
char bulletDir='r';
bool checkFirstEnemy=true, checkSecondEnemy=true, checkThirdEnemy=true, checkFourthEnemy=true, checkFifthEnemy=true, checkSixthEnemy=true;
bool checkSeventhEnemy=true, checkEightEnemy=true;

int ebulletX1,ebulletY1,ebulletX2,ebulletY2, ebulletX3, ebulletY3, ebulletX4, ebulletY4, ebulletX5, ebulletY5, ebulletX6, ebulletY6;
bool bulletactiveE1=false, bulletactiveE2=false, bulletactiveE3=false, bulletactiveE4=false, bulletactiveE5=false, bulletactiveE6=false;

int countForE1=0;


int enemy1=100, enemy2=100, enemy3=100, enemy4=100, enemy5=100 , enemy6=100;
bool nextLevel=false;


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
    string choice=printfrontpage();
    if(choice=="1")
    {
        system("cls");
        loadingScreen();
        Sleep(400);
        
        
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
            if(health<0)
            {
                break;
            }

            if(health>0 && !checkFifthEnemy && !checkSecondEnemy && !checkThirdEnemy && !checkFourthEnemy && !checkFifthEnemy && !checkSixthEnemy)
            {
                nextLevel=true;
                break;

            }
            

            Sleep(100);
            hp();
            enemydata();
            enemyShoot();
            moveEnemyBullet();
            printEnemyBullets();

            if(enemy1<=0)
            {

                checkFirstEnemy=false;
                bulletactiveE1=true;
                gotoxy(ebulletX1,ebulletY1);
                cout << " ";
            }
            if(enemy2<=0)
            {
                checkSecondEnemy=false;
                bulletactiveE2=true;
                gotoxy(ebulletX2,ebulletY2);
                cout << " ";
            }
            if(enemy3<=0)
            {
                checkThirdEnemy=false;
                bulletactiveE3=true;
                gotoxy(ebulletX3,ebulletY3);
                cout << " ";
            }
            if(enemy4<=0)
            {
                enemy4=0;
                checkFourthEnemy=false;
                bulletactiveE4=true;
                gotoxy(ebulletX4,ebulletY4);
                cout << " ";
            }
            if(enemy5<=0)
            {
                checkFifthEnemy=false;
                bulletactiveE5=true;
                gotoxy(ebulletX5,ebulletY5);
                cout << "  ";
            }
            if(enemy6<=0)
            {
                checkSixthEnemy=false;
                bulletactiveE6=true;
                gotoxy(ebulletX6,ebulletY6);
                cout << " ";
            }

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
            if (GetAsyncKeyState(VK_LSHIFT))
            {
                if (!bulletActive)
                {
                    bx = px - 2; 
                    by = py + 1;
                    bulletActive = true;
                    bulletDir='l';
                }
            }

            if(GetAsyncKeyState(VK_RSHIFT))
            {
                if (!bulletActive)
                {
                    bx= px;
                    by=py+2;
                    bulletActive=true;
                    bulletDir='d';
                }

            }
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                nextLevel=true;
                break;
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



            if (px == hx && py >= hy && py <= hy + 2) 
            {
                health = 200;
                hp();
            }

        }
        void powerup();
        void hp();

        if(health<=0)
        {
            system("cls");
            loadingScreen();
            Sleep(1000);

            system("cls");
            gameover();
            gotoxy(70,70);
        }


        if(nextLevel)
        {

            system("cls");
            loadingScreen();
            Sleep(400);


            px=58;
            py=24;
            ex7=36;
            ey7=18;
            ey8=29;
            ex8=79;
            
            system("cls");
            
            header();
            finalLevel();
            finalmaze();
            printhero();
            printenemy7();
            printenemy8();

            while(true)
            {
                Sleep(100);
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
            if (GetAsyncKeyState(VK_LSHIFT))
            {
                if (!bulletActive)
                {
                    bx = px - 2; 
                    by = py + 1;
                    bulletActive = true;
                    bulletDir='l';
                }
            }

            if(GetAsyncKeyState(VK_RSHIFT))
            {
                if (!bulletActive)
                {
                    bx= px;
                    by=py+2;
                    bulletActive=true;
                    bulletDir='d';
                }

            }

            if (bulletActive)
            {
                movefire();
            }

            moveEnemy7();
            moveEnemy8();
            }
            
        }
    }

}
  
string printfrontpage()
{
    cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%% #######   ### ##   #######   #####   ##   ##      ##   ##  #######  ### ##    #####  %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##  ##  ##   ##   ## ##       ##   ##   ##  ##   ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  # ### #      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ## ##    ####    #######  ## # ##      #######   ####     ## ##   ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  ##   ##      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##   ##  ##  ##  ##   ##  ##   ##      ##   ##   ##  ##   ##   ## ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%% #######    ##   ## #######  ##   ##  ##   ##      ##   ##  #######   ##   ##  #####  %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
	cout <<"                              /___\\                                The Saviour                                               " << endl;
	cout <<"                             | <><>|                                   of our                                                 " << endl;
	cout <<"                             (__/\\_)                                  Kingdom                                                " << endl;
	cout <<"                            /       \\                                   has                                                  " << endl;
	cout <<"                            ||     ||                                 RETURNED!                                               " << endl;
	cout <<"                            | /  \\  |                                                                                        " << endl;
	cout <<"                            \\/] [][\\/                                                                                       " << endl;
	cout <<"                             | | | |                                                                                          " << endl;
	cout <<"                             |_| |_|                                                                                          " << endl;
	cout <<"                             [ ] [ ]                                                                                          " << endl;
	cout <<"                             | | | |                                                                                          " << endl;
	cout <<"                             |_| |_|                                                                                          " << endl;
	cout <<"____________________________ [ \\ [ \\_______________________________________________________________________________________ " << endl;
	cout <<"----------------------------------------------------Enter 1 to play the game--------------------------------------------------" << endl;
	cout <<"-----------------------------------------------Enter any other key to exit the game-------------------------------------------" << endl;
    cout <<"---------------------------------------------------------Your choice:     ----------------------------------------------------" << endl;
     string choice;
     gotoxy(70,29);
     cin >> choice;
     return choice;
}

void loadingScreen()
{
    cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%% #######   ### ##   #######   #####   ##   ##      ##   ##  #######  ### ##    #####  %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##  ##  ##   ##   ## ##       ##   ##   ##  ##   ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  # ### #      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ## ##    ####    #######  ## # ##      #######   ####     ## ##   ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  ##   ##      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##   ##  ##  ##  ##   ##  ##   ##      ##   ##   ##  ##   ##   ## ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%% #######    ##   ## #######  ##   ##  ##   ##      ##   ##  #######   ##   ##  #####  %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
    cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
    cout <<"                                                     Loading please Wait!                                                     " << endl;
	cout <<"                                                                                                                              " << endl;
    cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
    cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
    cout <<"                                                                                                                              " << endl;
	cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

void header()
{
    cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%% #######   ### ##   #######   #####   ##   ##      ##   ##  #######  ### ##    #####  %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##  ##  ##   ##   ## ##       ##   ##   ##  ##   ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  # ### #      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ## ##    ####    #######  ## # ##      #######   ####     ## ##   ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  ##   ##      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##   ##  ##  ##  ##   ##  ##   ##      ##   ##   ##  ##   ##   ## ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%% #######    ##   ## #######  ##   ##  ##   ##      ##   ##  #######   ##   ##  #####  %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
}

void gameover()
{
    cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%% #######   ### ##   #######   #####   ##   ##      ##   ##  #######  ### ##    #####  %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##  ##  ##   ##   ## ##       ##   ##   ##  ##   ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  # ### #      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ## ##    ####    #######  ## # ##      #######   ####     ## ##   ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  ##   ##      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%  ##   ##   ##   ##  ##  ##  ##   ##  ##   ##      ##   ##   ##  ##   ##   ## ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%% #######    ##   ## #######  ##   ##  ##   ##      ##   ##  #######   ##   ##  #####  %%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
    cout <<"                                                                                                                              " << endl;
	cout <<"                                                        GAME OVER!                                                             " << endl;
    cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
    cout <<"                                                                                                                              " << endl;
	cout <<"                                                                                                                              " << endl;
	cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
   
    
}

void level()
{
        cout <<R"(
                     __,    ____,  __  _, ____,  __,      ___, 
                    (-|    (-|_,  (-\  / (-|_,  (-|      (-/|  
                     _|__,  _|__,   _\/   _|__,  _|__,    '_|, 
                    (      (       (     (      (         (   
                                                            )";;
}

void finalLevel()
{
    cout <<R"(
                                ___  _              _   _                    _ 
                                | __|(_) _ _   __ _ | | | |    ___ __ __ ___ | |
                                | _| | || ' \ / _` || | | |__ / -_)\ V // -_)| |
                                |_|  |_||_||_|\__,_||_| |____|\___| \_/ \___||_|
                                               
    )";;
}


void finalmaze()
{
    cout << "\t" << "\t" << "\t"<< "\t"<<"########################################################" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                       #     #                        #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                       #     #                        #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                       #     #                        #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"#                                                      #" << endl;
    cout << "\t" << "\t" << "\t"<< "\t"<<"########################################################" << endl;
    
    

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
    level();

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

void printenemy7()
{
    gotoxy(ex7, ey7);
    cout <<"  X  " ;
    gotoxy(ex7,ey7+1);
    cout <<"XXXXX" ;
    gotoxy(ex7,ey7+2);
    cout <<"XXXXX" ;
    gotoxy(ex7,ey7+3);
    cout <<" X X " ;

}

void printenemy8()
{
    gotoxy(ex8, ey8);
    cout <<"  A  " ;
    gotoxy(ex8,ey8+1);
    cout <<"AAAAA" ;
    gotoxy(ex8,ey8+2);
    cout <<"AAAAA" ;
    gotoxy(ex8,ey8+3);
    cout <<" A A " ;

}

void removeEnemy7(){
    gotoxy(ex7, ey7);
    cout <<"     " ;
    gotoxy(ex7,ey7+1);
    cout <<"     " ;
    gotoxy(ex7,ey7+2);
    cout <<"     " ;
    gotoxy(ex7,ey7+3);
    cout <<"     " ;
}
void removeEnemy8(){
    gotoxy(ex8, ey8);
    cout <<"     " ;
    gotoxy(ex8,ey8+1);
    cout <<"     " ;
    gotoxy(ex8,ey8+2);
    cout <<"     " ;
    gotoxy(ex8,ey8+3);
    cout <<"     " ;
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

void moveEnemy7(){
   
    removeEnemy7();
    if(checkSeventhEnemy)
    {
    if(contact7==0){
    ey7=ey7+1;}
    if(ey7==30){
        contact7=1;
    }
    if(contact7==1){
        ey7=ey7-1;
    }
 
    if(ey7==18){
        contact7=0;
    }


    printenemy7();
    }
}
void moveEnemy8(){
   
    removeEnemy8();
    if(checkEightEnemy)
    {
    if(contact8==0){
    ey8=ey8+1;}
    if(ey8==30){
        contact8=1;
    }
    if(contact8==1){
        ey8=ey8-1;
    }
 
    if(ey8==18){
        contact8=0;
    }


    printenemy8();
    }
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
    else if (bulletDir == 'l')
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
    else if (bulletDir=='d')
    {
        if (getCharAtxy(bx, by+3) != '#')
        {
            by += 3; // Move down
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
    if (getCharAtxy(bx, by) == '#' || bx >= 97  || by>37 || by<1 || getCharAtxy(bx+1,by)=='#' || getCharAtxy(bx-1,by)=='#' || bx<=0 || getCharAtxy(bx+2,by)=='#' || getCharAtxy(bx+3,by)=='#' || getCharAtxy(bx-2,by)=='#' || getCharAtxy(bx-3,by)=='#')
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

void printEnemyBullets() {
    if (bulletactiveE1) {
        gotoxy(ebulletX1, ebulletY1);
        cout << "<";
    }
    if (bulletactiveE2) {
        gotoxy(ebulletX2, ebulletY2);
        cout << ">";
    }
    if (bulletactiveE3) {
        gotoxy(ebulletX3, ebulletY3);
        cout << "^";
    }
    if (bulletactiveE4) {
        gotoxy(ebulletX4, ebulletY4);
        cout << "x";
    }
    if (bulletactiveE5) {
        gotoxy(ebulletX5, ebulletY5);
        cout << "<<";
    }
    if (bulletactiveE6) {
        gotoxy(ebulletX6, ebulletY6);
        cout << "<";
    }
    
}

void moveEnemyBullet()
{
    if (bulletactiveE1 && checkFirstEnemy) 
    {
        gotoxy(ebulletX1, ebulletY1);
        cout << " ";
        ebulletX1-=2;
        if (ebulletX1 <=0 || ebulletX1<35 || getCharAtxy(ebulletX1,ebulletY1)=='#') {
            bulletactiveE1 = false;
        }

        if(getCharAtxy(ebulletX1,ebulletY1)=='o'|| getCharAtxy(ebulletX1,ebulletY1)=='|' || getCharAtxy(ebulletX1,ebulletY1)=='\\' || getCharAtxy(ebulletX1,ebulletY1)=='/')
        {
            health-=25;
        }
    }

    if (bulletactiveE2 && checkSecondEnemy) 
    {
        gotoxy(ebulletX2, ebulletY2);
        cout << " ";
        ebulletX2+=2;
        if (ebulletX2 >=97 || ebulletX2>39 || getCharAtxy(ebulletX2,ebulletY2)=='#') {
            bulletactiveE2 = false;
        }

        if(getCharAtxy(ebulletX2,ebulletY2)=='o'|| getCharAtxy(ebulletX2,ebulletY2)=='|' || getCharAtxy(ebulletX2,ebulletY2)=='\\' || getCharAtxy(ebulletX2,ebulletY2)=='/')
        {
            health-=25;
        }
    }

    if (bulletactiveE3 && checkThirdEnemy) 
    {
        gotoxy(ebulletX3, ebulletY3);
        cout << " ";
        ebulletY3-=2;
        if (ebulletY3 <=20 || ebulletY3>=37 ||  getCharAtxy(ebulletX3,ebulletY3)=='#') {
            bulletactiveE3 = false;
        }

        if(getCharAtxy(ebulletX3,ebulletY3)=='o'|| getCharAtxy(ebulletX3,ebulletY3)=='|' || getCharAtxy(ebulletX3,ebulletY3)=='\\' || getCharAtxy(ebulletX3,ebulletY3)=='/')
        {
            health-=25;
        }
    }

    if (bulletactiveE6 && checkSixthEnemy) 
    {
        gotoxy(ebulletX6, ebulletY6);
        cout << " ";
        ebulletX6-=1;
        if (ebulletX6 <=20 || getCharAtxy(ebulletX6,ebulletY6)=='#') {
            bulletactiveE6 = false;
        }

        if(getCharAtxy(ebulletX6,ebulletY6)=='o'|| getCharAtxy(ebulletX6,ebulletY6)=='|' || getCharAtxy(ebulletX6,ebulletY6)=='\\' || getCharAtxy(ebulletX6,ebulletY6)=='/')
        {
            health-=25;
        }
    }

    if (bulletactiveE4 && checkFourthEnemy) 
    {
        gotoxy(ebulletX4, ebulletY4);
        cout << " ";
        ebulletY4+=2;
        if (ebulletY4 >=22 || getCharAtxy(ebulletX4,ebulletY4)=='#') {
            bulletactiveE4 = false;
        }

        if(getCharAtxy(ebulletX4,ebulletY4)=='o'|| getCharAtxy(ebulletX4,ebulletY4)=='|' || getCharAtxy(ebulletX4,ebulletY4)=='\\' || getCharAtxy(ebulletX4,ebulletY4)=='/')
        {
            health-=25;
        }
    }

    if (bulletactiveE5 && checkFifthEnemy) 
    {
        gotoxy(ebulletX5, ebulletY5);
        cout << "  ";
        ebulletX5-=2;
        if (ebulletX5 <=20  || getCharAtxy(ebulletX5,ebulletY5)=='#') {
            bulletactiveE5 = false;
        }

        if(getCharAtxy(ebulletX5,ebulletY5)=='o'|| getCharAtxy(ebulletX5,ebulletY5)=='|' || getCharAtxy(ebulletX5,ebulletY5)=='\\' || getCharAtxy(ebulletX5,ebulletY5)=='/')
        {
            health-=25;
        }
    }
}

void enemyShoot() 
{
    if (!bulletactiveE1) 
    {
        ebulletX1 = ex1 + 2;
        ebulletY1 = ey1+1;
        bulletactiveE1 = true;
    }
    if (!bulletactiveE2) 
    {
        ebulletX2 = ex2+2;
        ebulletY2 = ey2+1;
        bulletactiveE2 = true;
    }
    if (!bulletactiveE3) 
    {
        ebulletX3 = ex3+1;
        ebulletY3 = ey3-2;
        bulletactiveE3 = true;
    }
    if (!bulletactiveE6) 
    {
        ebulletX6 = ex6+2;
        ebulletY6 = ey6+1;
        bulletactiveE6 = true;
    }
    if (!bulletactiveE4) 
    {
        ebulletX4 = ex4+1;
        ebulletY4 = ey4+2;
        bulletactiveE4 = true;
    }
    if (!bulletactiveE5) 
    {
        ebulletX5 = ex5+2;
        ebulletY5 = ey5+1;
        bulletactiveE5 = true;
    }

}



void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}