#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y);

// this functions is used for changing the colours
string setcolor(unsigned short color);

// this functions prints the maze of the first level
void printmaze();

// functions for the printing of the hero
void printhero();

// functions for the printing of enemies
void printenemy1();
void printenemy2();
void printenemy3();
void printenemy4();
void printenemy5();
void printenemy6();

// function to remove the hero
void removeHero();

// These removes enemies when they have been printed
void removeEnemy1();
void removeEnemy2();
void removeEnemy3();
void removeEnemy4();
void removeEnemy5();
void removeEnemy6();

// these are for the movements of the enemies
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
void moveEnemy4();
void moveEnemy5();
void moveEnemy6();

// this functions are for the movement of the hero
void moveHeroleft();
void moveHeroright();
void moveHeroup();
void moveHerodown();

// this functions are used to display the powerup and increments the health of the hero
void hp();
void powerup();

// this moves and removes fire of the hero
void removefire();
void movefire();

// this displays enemies health
void enemydata();

// these functions are used for the printing and detection and movement of the enemy bullets of the first level
void moveEnemyBullet();
void printEnemyBullets();
void enemyShoot();

// this prints the first page
string printfrontpage();

// this is the loading screen 
void loadingScreen();

// this prints the first level layout
void level();
void header();

// this prints the layout of the final level
void finalLevel();
void finalmaze();

// these prints the enemies of the final level
void printenemy7();
void printenemy8();

// these remove the enemies of the finale level
void removeEnemy7();
void removeEnemy8();

// these moves the enemy of the finale level
void moveEnemy7();
void moveEnemy8();
// this is printed when game is over
void gameover();

// this gives details of the health of hero and villains of the final level
void dataForfinallevel();

// this functions are regarding the printing, detection and movement of enemies of the final level
void enemybulletfinalLevel();
void moveBulletForfinal();
void enemyShootFinal();

// this is printed when the game is completed
void gamecomplete();




//px and py are coordinates of player(hero);        ex1,ex2, etc and ey1, ey2, etc are coordinates of enemy1, enemy2,etc 
int px = 17, py = 15, ex1 = 90, ey1 = 4, ex2 = 4, ey2 = 4, ex3 = 33, ey3 = 27, ex4 = 91, ey4 = 12, ex5 = 85, ey5 = 25, ex6 = 37, ey6 = 18, hx = 46, hy = 4;
int ex7, ex8, ey7, ey8;
// These are used to make the logic for movement of enemies i-e: if they hit the wall contact becomes 1;
int contact1 = 0, contact2 = 0, contact3 = 0, contact4 = 0;
int contact5 = 0, contact6 = 0, contact7 = 0, contact8 = 0;
// It is the health of the hero
int health = 100;
// These are the coordinates of bullets of hero
int bx = px + 5;
int by = py + 1;
// bool to check if the bullet of the hero is active
bool bulletActive = false;
// checks if the powerup is taken or not
bool takenpowerup= false;
// This give the direction of what the bullet will go
char bulletDir = 'r';
// These bool variavles check if the enemy is alive or not
bool checkFirstEnemy = true, checkSecondEnemy = true, checkThirdEnemy = true, checkFourthEnemy = true, checkFifthEnemy = true, checkSixthEnemy = true;
bool checkSeventhEnemy = true, checkEightEnemy = true;
//These are the coordinates of bullets of enemies
int ebulletX1, ebulletY1, ebulletX2, ebulletY2, ebulletX3, ebulletY3, ebulletX4, ebulletY4, ebulletX5, ebulletY5, ebulletX6, ebulletY6;
int ebulletX7, ebulletY7, ebulletX8, ebulletY8;
// This checks if the enemy bullet is active
bool bulletactiveE1 = false, bulletactiveE2 = false, bulletactiveE3 = false, bulletactiveE4 = false, bulletactiveE5 = false, bulletactiveE6 = false;
bool bulletactiveE7 = false, bulletactiveE8 = false;
// this to ensure the removal of enemy after their death
int counterforEnemy1=0, counterforEnemy2=0, counterforEnemy3=0, counterforEnemy4=0, counterforEnemy5=0, counterforEnemy6=0, counterforEnemy7=0, counterforEnemy8=0;
// These are the healths of enemies
int enemy1 = 100, enemy2 = 100, enemy3 = 100, enemy4 = 100, enemy5 = 100, enemy6 = 100;
int enemy7 = 100, enemy8 = 100;
// This turn true when the condition for the next level becomes applicable
bool nextLevel = false;
// This checks if the game is completed
bool gamecompletion = false;

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
    string choice = printfrontpage(); //print the frint page of the game
    if (choice == "1")
    {
        system("cls");
        loadingScreen(); // loading screen
        Sleep(400);

        system("cls");  
        printmaze();    // print the objects of the first level
        printhero();
        printenemy1();
        printenemy2();
        printenemy3();
        printenemy4();
        printenemy5();
        printenemy6();
        powerup();
        while (true)
        {
            if (health < 0) // checks health of hero
            {
                break;
            }

            if (health > 0 && !checkFifthEnemy && !checkSecondEnemy && !checkThirdEnemy && !checkFourthEnemy && !checkFifthEnemy && !checkSixthEnemy) // checks the condition for the next level
            {
                nextLevel = true;
                break;
            }

            Sleep(100);
            hp();
            enemydata();   // this displays the health of the enemies
            enemyShoot();   // this checks if the bullet is active or not and give the bullet its coordinates
            moveEnemyBullet(); // this move the bullets of the enemies in the first level
            printEnemyBullets(); // this prints the bullets of the enemies in the first level

            // check if the enemies are alive or not
            if (enemy1 <= 0)
            {

                checkFirstEnemy = false;
                bulletactiveE1 = true;
                gotoxy(ebulletX1, ebulletY1);
                cout << " ";
                counterforEnemy1++;
            }
            if (enemy2 <= 0)
            {
                checkSecondEnemy = false;
                bulletactiveE2 = true;
                gotoxy(ebulletX2, ebulletY2);
                cout << " ";
                counterforEnemy2++;
            }
            if (enemy3 <= 0)
            {
                checkThirdEnemy = false;
                bulletactiveE3 = true;
                gotoxy(ebulletX3, ebulletY3);
                cout << " ";
                counterforEnemy3++;
            }
            if (enemy4 <= 0)
            {
                enemy4 = 0;
                checkFourthEnemy = false;
                bulletactiveE4 = true;
                gotoxy(ebulletX4, ebulletY4);
                cout << " ";
                counterforEnemy4++;
            }
            if (enemy5 <= 0)
            {
                checkFifthEnemy = false;
                bulletactiveE5 = true;
                gotoxy(ebulletX5, ebulletY5);
                cout << "  ";
                counterforEnemy5++;
            }
            if (enemy6 <= 0)
            {
                checkSixthEnemy = false;
                bulletactiveE6 = true;
                gotoxy(ebulletX6, ebulletY6);
                cout << " ";
                counterforEnemy6++;
            }

            // for the movement of the hero
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
                    bx = px + 3;
                    by = py + 1;
                    bulletActive = true;

                    bulletDir = 'r'; // shoots bullet towards right
                }
            }
            if (GetAsyncKeyState(VK_HOME))
            {
                if (!bulletActive)
                {
                    bx = px - 1;
                    by = py + 1;
                    bulletActive = true;
                    bulletDir = 'l'; // shoot bullets towards left
                }
            }

            if (GetAsyncKeyState(VK_ESCAPE))
            {
                nextLevel = true;
                break;              // shortcut fot the nextlevel
            }

            if (bulletActive)
            {
                movefire();
            }

            // if first enemy is at the same position as hero the hero teleports
            if(getCharAtxy(px,py)== '@')
            {
                removeHero();
                px=hx;
                py=hy;
                printhero();
            }
            // this is the teleportation regarding second enemy
            if(getCharAtxy(px,py)== '$')
            {
                removeHero();
                px=hx;
                py=hy;
                printhero();
            }
            // teleportation regarding third enemy
            if(getCharAtxy(px,py)== '&')
            {
                removeHero();
                px=10;
                py=15;
                printhero();
            }
            // teleportation regarding the sixth the diagonal moving enemy
            if(getCharAtxy(px,py)== '%' || getCharAtxy(px,py-1)=='%' || getCharAtxy(px,py+1)=='%')
            {
                removeHero();
                px=20;
                py=20;
                printhero();
            }
            // teleportaion regarding the fourth enemy
            if(getCharAtxy(px,py)== '*')
            {
                removeHero();
                px=20;
                py=20;
                printhero();
            }
            // teleportation regarding the fifth enemy
            if(getCharAtxy(px,py)== '8' || getCharAtxy(px+2,py)=='8')
            {
                removeHero();
                px=10;
                py=15;
                printhero();
            }

            // calls of functions for the movement of enemies
            
            moveEnemy1();

            moveEnemy2();

            moveEnemy3();

            moveEnemy4();

            moveEnemy5();

            moveEnemy6();

            // checks the powerup coordinates of the health
            if (px == hx && py >= hy && py <= hy + 2)
            {
                if(!takenpowerup)
                {
                health = 200;
                hp();
                takenpowerup=true;
                }
            }
        }
        void powerup();
        void hp();
        // if the health is less than zero then game is over
        if (health <= 0)
        {
            system("cls");
            loadingScreen();
            Sleep(1000);

            system("cls");
            gameover();
            gotoxy(70, 70);
        }

        // the setup for the next level
        if (nextLevel)
        {

            system("cls");
            loadingScreen();
            Sleep(400);

            //sets the coordinates for the hero and the enemies of the final level
            px = 58;
            py = 24;
            ex7 = 36;
            ey7 = 18;
            ey8 = 29;
            ex8 = 79;

            system("cls");

            // print the objects of the final level 
            header();
            finalLevel();
            finalmaze();
            printhero();
            printenemy7();
            printenemy8();

            while (true)
            {
                enemyShootFinal();  // check if the bullet is active of enemies of the final level and reassigns them their coordinates
                moveBulletForfinal();   // move the bullet for the enemies of the final level
                enemybulletfinalLevel();    // prints the bullet of enemies of the finale level
                dataForfinallevel();    // it displays the data of the final level(health , enemies health)
                Sleep(100);

                if (health < 0) // condition of hero dying
                {
                    break;
                }

                

                if (health > 0 && !checkSeventhEnemy && !checkEightEnemy) // condition for game completion
                {
                    gamecompletion = true;
                    break;
                }

                // changes after the enemy dies
                if (enemy7 <= 0)    
                {
                   
                    checkSeventhEnemy = false;
                    bulletactiveE7 = true;
                     gotoxy(ebulletX7,ebulletY7);
                    cout << "  ";
                    counterforEnemy7++;
                }

                if (enemy8 <= 0)
                {
                    
                    checkEightEnemy = false;
                    bulletactiveE8 = true;
                    gotoxy(ebulletX8, ebulletY8);
                    cout << "  ";
                    counterforEnemy8++;
                }

                // for the movements of the hero
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
                        bx = px + 3;
                        by = py + 1;
                        bulletActive = true;

                        bulletDir = 'r';  // for firing og hero bullet towards right
                    }
                }
                if (GetAsyncKeyState(VK_HOME))
                {
                    if (!bulletActive)
                    {
                        bx = px - 1;
                        by = py + 1;
                        bulletActive = true;
                        bulletDir = 'l';  // for firing of hero bullet towards left
                    }
                }


                if (bulletActive)
                {
                    movefire();
                }

                // functions for the movements of enemies
                moveEnemy7();
                moveEnemy8();
            }
        }

        // condition check for game over
        if (health <= 0)
        {
            system("cls");
            loadingScreen();
            Sleep(1000);

            system("cls");
            gameover();
            gotoxy(70, 70);
        }

        // if the game is completed
        if (gamecompletion)
        {
            system("cls");
            loadingScreen();
            Sleep(1000);

            system("cls");
            gamecomplete();
            gotoxy(70, 70);
        }
    }
}
// it is the front page
string printfrontpage()
{
    setcolor(3);
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%% #######   ### ##   #######   #####   ##   ##      ##   ##  #######  ### ##    #####  %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##  ##  ##   ##   ## ##       ##   ##   ##  ##   ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  # ### #      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ## ##    ####    #######  ## # ##      #######   ####     ## ##   ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  ##   ##      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##   ##  ##  ##  ##   ##  ##   ##      ##   ##   ##  ##   ##   ## ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%% #######    ##   ## #######  ##   ##  ##   ##      ##   ##  #######   ##   ##  #####  %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                              /___\\                                The Saviour                                               " << endl;
    cout << "                             | <><>|                                   of our                                                 " << endl;
    cout << "                             (__/\\_)                                  Kingdom                                                " << endl;
    cout << "                            /       \\                                   has                                                  " << endl;
    cout << "                            ||     ||                                 RETURNED!                                               " << endl;
    cout << "                            | /  \\  |                                                                                        " << endl;
    cout << "                            \\/] [][\\/                                                                                       " << endl;
    cout << "                             | | | |                                                                                          " << endl;
    cout << "                             |_| |_|                                                                                          " << endl;
    cout << "                             [ ] [ ]                                                                                          " << endl;
    cout << "                             | | | |                                                                                          " << endl;
    cout << "                             |_| |_|                                                                                          " << endl;
    cout << "____________________________ [ \\ [ \\_______________________________________________________________________________________ " << endl;
    cout << "----------------------------------------------------Enter 1 to play the game--------------------------------------------------" << endl;
    cout << "-----------------------------------------------Enter any other key to exit the game-------------------------------------------" << endl;
    cout << "---------------------------------------------------------Your choice:     ----------------------------------------------------" << endl;
    string choice;
    gotoxy(70, 29);
    cin >> choice;
    return choice;
}
// it is the loading screen
void loadingScreen()
{
    setcolor(4);
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%% #######   ### ##   #######   #####   ##   ##      ##   ##  #######  ### ##    #####  %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##  ##  ##   ##   ## ##       ##   ##   ##  ##   ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  # ### #      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ## ##    ####    #######  ## # ##      #######   ####     ## ##   ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  ##   ##      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##   ##  ##  ##  ##   ##  ##   ##      ##   ##   ##  ##   ##   ## ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%% #######    ##   ## #######  ##   ##  ##   ##      ##   ##  #######   ##   ##  #####  %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                     Loading please Wait!                                                     " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}
// header of the game
void header()
{
    setcolor(4);
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%% #######   ### ##   #######   #####   ##   ##      ##   ##  #######  ### ##    #####  %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##  ##  ##   ##   ## ##       ##   ##   ##  ##   ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  # ### #      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ## ##    ####    #######  ## # ##      #######   ####     ## ##   ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  ##   ##      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##   ##  ##  ##  ##   ##  ##   ##      ##   ##   ##  ##   ##   ## ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%% #######    ##   ## #######  ##   ##  ##   ##      ##   ##  #######   ##   ##  #####  %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
}
// prints when game is over
void gameover()
{
    setcolor(6);
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%% #######   ### ##   #######   #####   ##   ##      ##   ##  #######  ### ##    #####  %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##  ##  ##   ##   ## ##       ##   ##   ##  ##   ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  # ### #      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ## ##    ####    #######  ## # ##      #######   ####     ## ##   ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  ##   ##      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##   ##  ##  ##  ##   ##  ##   ##      ##   ##   ##  ##   ##   ## ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%% #######    ##   ## #######  ##   ##  ##   ##      ##   ##  #######   ##   ##  #####  %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                        GAME OVER!                                                             " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}
// prints when game is completed
void gamecomplete()
{
    setcolor(5);
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%% #######   ### ##   #######   #####   ##   ##      ##   ##  #######  ### ##    #####  %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##  ##  ##   ##   ## ##       ##   ##   ##  ##   ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  # ### #      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ## ##    ####    #######  ## # ##      #######   ####     ## ##   ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##  ##   ##      ##   ##  ##   ##      ##   ##   ##       ##  ##  ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%  ##   ##   ##   ##  ##  ##  ##   ##  ##   ##      ##   ##   ##  ##   ##   ## ##   ## %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%% #######    ##   ## #######  ##   ##  ##   ##      ##   ##  #######   ##   ##  #####  %%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                       Congratulation!                                                        " << endl;
    cout << "                                                    You have completed the game.                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}
// first level footer
void level()
{
    setcolor(13);
    cout << R"(
                     __,    ____,  __  _, ____,  __,      ___, 
                    (-|    (-|_,  (-\  / (-|_,  (-|      (-/|  
                     _|__,  _|__,   _\/   _|__,  _|__,    '_|, 
                    (      (       (     (      (         (   
                                                            )";
    ;
}
// final level logo
void finalLevel()
{
    setcolor(14);
    cout << R"(
                                ___  _              _   _                    _ 
                                | __|(_) _ _   __ _ | | | |    ___ __ __ ___ | |
                                | _| | || ' \ / _` || | | |__ / -_)\ V // -_)| |
                                |_|  |_||_||_|\__,_||_| |____|\___| \_/ \___||_|
                                               
    )";
    ;
}

// maze for the final level
void finalmaze()
{
    setcolor(8);
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "########################################################" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                      ##     ##                       #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                      ##     ##                       #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                      ##     ##                       #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "########################################################" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "#                                                      #" << endl;
    cout << "\t"
         << "\t"
         << "\t"
         << "\t"
         << "########################################################" << endl;
}
// first level maze
void printmaze()
{
    setcolor(8);
    cout << "################################################################################################" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                          #########                                           #" << endl;
    cout << "#                                          ##     ##                                           #" << endl;
    cout << "#                                          ##     ##                                           #" << endl;
    cout << "#                                         ###     ###                                          #" << endl;
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
// sets the location of the powerup
void powerup()
{
    setcolor(10);
    gotoxy(hx, hy);
    cout << " H  ";
    gotoxy(hx, hy + 1);
    cout << " H  ";
    gotoxy(hx, hy + 2);
    cout << " H  ";
}
// prints the hero health
void hp()
{
    setcolor(2);
    if(health==100)
    {
        gotoxy(38,31);
        cout << "Health: " << 100;
    }
    else
    {

        gotoxy(38,31);
        cout << "Health: " <<"    ";
        gotoxy(38,31);
        cout << "Health: " << health;
    }
}
// prints the enemies health
void enemydata()
{
    setcolor(4);
    if(enemy1==100)
    {
        gotoxy(1, 32);
        cout << "Enemy1: " << 100;
    }
    else
    {
         gotoxy(1, 32);
        cout << "Enemy1: " << "    ";
         gotoxy(1, 32);
        cout << "Enemy1: " << enemy1;
    }
   setcolor(5);
   if(enemy2==100)
   {
    gotoxy(16, 32);
    cout << "Enemy2: " << 100;
   }
   else
   {
    gotoxy(16, 32);
    cout << "Enemy2: " << "    ";
    gotoxy(16, 32);
    cout << "Enemy2: " << enemy2;
   }
    setcolor(9);
   if(enemy3==100)
   {
    gotoxy(32, 32);
    cout << "Enemy3: " << 100;
   }
   else
   {
    gotoxy(32, 32);
    cout << "Enemy3: " << "    ";
    gotoxy(32, 32);
    cout << "Enemy3: " << enemy3;
   }
    setcolor(9);
   if(enemy4==100)
   {
    gotoxy(48, 32);
    cout << "Enemy4: " << 100;
   }
   else
   {
    gotoxy(48, 32);
    cout << "Enemy4: " << "    ";
    gotoxy(48, 32);
    cout << "Enemy4: " << enemy4;
   }
    setcolor(12);
    if(enemy5==100)
   {
    gotoxy(64, 32);
    cout << "Enemy5: " << 100;
   }
   else
   {
    gotoxy(64, 32);
    cout << "Enemy5: " << "    ";
    gotoxy(64, 32);
    cout << "Enemy5: " << enemy5;
   }
    setcolor(13);
   if(enemy6==100)
   {
    gotoxy(80, 32);
    cout << "Enemy6: " << 100;
   }
   else
   {
    gotoxy(80, 32);
    cout << "Enemy6: " << "    ";
    gotoxy(80, 32);
    cout << "Enemy6: " << enemy6;
   }
    
}
// print the health of hero and enemies for the final level
void dataForfinallevel()
{
    setcolor(10);
    gotoxy(37,34);
    cout << "Health: " <<"    ";
    gotoxy(37,34);
    cout << "Health: " << health;
    setcolor(4);
    gotoxy(55, 34);
    cout << "Boss 1: " << "    ";
    gotoxy(55, 34);
    cout << "Boss 1: " << enemy7;
    setcolor(1);
    gotoxy(70, 34);
    cout << "Boss 2: " << "     ";
    gotoxy(70, 34);
    cout << "Boss 2: " << enemy8;
}
// prints the hero
void printhero()
{
    setcolor(10);
    gotoxy(px, py);
    cout << " o  ";
    gotoxy(px, py + 1);
    cout << "/|\\";
    gotoxy(px, py + 2);
    cout << "/ \\";
}

// functions for the printing of the enemies
void printenemy1()
{
    setcolor(12);
    gotoxy(ex1, ey1);
    cout << " @ ";
    gotoxy(ex1, ey1 + 1);
    cout << "@@@";
    gotoxy(ex1, ey1 + 2);
    cout << "@@@";
}

void printenemy2()
{
    setcolor(13);
    gotoxy(ex2, ey2);
    cout << " $ ";
    gotoxy(ex2, ey2 + 1);
    cout << "$$$";
    gotoxy(ex2, ey2 + 2);
    cout << "$$$";
}

void printenemy3()
{
    setcolor(3);
    gotoxy(ex3, ey3);
    cout << " & ";
    gotoxy(ex3, ey3 + 1);
    cout << "&&&";
    gotoxy(ex3, ey3 + 2);
    cout << "&&&";
}

void printenemy4()
{
    setcolor(9);
    gotoxy(ex4, ey4);
    cout << " * ";
    gotoxy(ex4, ey4 + 1);
    cout << "***";
    gotoxy(ex4, ey4 + 2);
    cout << "***";
}

void printenemy5()
{
    setcolor(4);
    gotoxy(ex5, ey5);
    cout << "  8  ";
    gotoxy(ex5, ey5 + 1);
    cout << "88888";
    gotoxy(ex5, ey5 + 2);
    cout << "88888";
    gotoxy(ex5, ey5 + 3);
    cout << " 8 8 ";
}

void printenemy6()
{
    setcolor(5);
    gotoxy(ex6, ey6);
    cout << " % ";
    gotoxy(ex6, ey6 + 1);
    cout << "%%%";
    gotoxy(ex6, ey6 + 2);
    cout << "%%%";
}

void printenemy7()
{
    setcolor(4);
    gotoxy(ex7, ey7);
    cout << "  X  ";
    gotoxy(ex7, ey7 + 1);
    cout << "XXXXX";
    gotoxy(ex7, ey7 + 2);
    cout << "XXXXX";
    gotoxy(ex7, ey7 + 3);
    cout << " X X ";
}

void printenemy8()
{
    setcolor(1);
    gotoxy(ex8, ey8);
    cout << "  A  ";
    gotoxy(ex8, ey8 + 1);
    cout << "AAAAA";
    gotoxy(ex8, ey8 + 2);
    cout << "AAAAA";
    gotoxy(ex8, ey8 + 3);
    cout << " A A ";
}

// functions for the removal of the enemies and hero
void removeEnemy7()
{
    gotoxy(ex7, ey7);
    cout << "     ";
    gotoxy(ex7, ey7 + 1);
    cout << "     ";
    gotoxy(ex7, ey7 + 2);
    cout << "     ";
    gotoxy(ex7, ey7 + 3);
    cout << "     ";
}
void removeEnemy8()
{
    gotoxy(ex8, ey8);
    cout << "     ";
    gotoxy(ex8, ey8 + 1);
    cout << "     ";
    gotoxy(ex8, ey8 + 2);
    cout << "     ";
    gotoxy(ex8, ey8 + 3);
    cout << "     ";
}

void removeHero()
{
    gotoxy(px, py);
    cout << "   ";
    gotoxy(px, py + 1);
    cout << "    ";
    gotoxy(px, py + 2);
    cout << "    ";
}

void removeEnemy1()
{
    gotoxy(ex1, ey1);
    cout << "   ";
    gotoxy(ex1, ey1 + 1);
    cout << "   ";
    gotoxy(ex1, ey1 + 2);
    cout << "   ";
}

void removeEnemy2()
{
    gotoxy(ex2, ey2);
    cout << "   ";
    gotoxy(ex2, ey2 + 1);
    cout << "   ";
    gotoxy(ex2, ey2 + 2);
    cout << "   ";
}

void removeEnemy3()
{
    gotoxy(ex3, ey3);
    cout << "   ";
    gotoxy(ex3, ey3 + 1);
    cout << "   ";
    gotoxy(ex3, ey3 + 2);
    cout << "   ";
}

void removeEnemy4()
{
    gotoxy(ex4, ey4);
    cout << "   ";
    gotoxy(ex4, ey4 + 1);
    cout << "   ";
    gotoxy(ex4, ey4 + 2);
    cout << "   ";
}

void removeEnemy5()
{
    gotoxy(ex5, ey5);
    cout << "     ";
    gotoxy(ex5, ey5 + 1);
    cout << "     ";
    gotoxy(ex5, ey5 + 2);
    cout << "     ";
    gotoxy(ex5, ey5 + 3);
    cout << "     ";
}

void removeEnemy6()
{
    gotoxy(ex6, ey6);
    cout << "   ";
    gotoxy(ex6, ey6 + 1);
    cout << "   ";
    gotoxy(ex6, ey6 + 2);
    cout << "   ";
}

// functions for the movement of hero and the enemies
void moveEnemy7()
{

    if(counterforEnemy7<=1)
    {
        removeEnemy7();
    if (checkSeventhEnemy)
    {
        if (contact7 == 0)
        {
            ey7 = ey7 + 1;
        }
        if (ey7 == 30)
        {
            contact7 = 1;
        }
        if (contact7 == 1)
        {
            ey7 = ey7 - 1;
        }

        if (ey7 == 18)
        {
            contact7 = 0;
        }

        printenemy7();
    }
    }
}
// checks if enemy8 is alive then moves it
void moveEnemy8()
{
    if(counterforEnemy8<=1)
    {
        
    removeEnemy8();
    if (checkEightEnemy)
    {
        if (contact8 == 0)
        {
            ey8 = ey8 + 1;
        }
        if (ey8 == 30)
        {
            contact8 = 1;
        }
        if (contact8 == 1)
        {
            ey8 = ey8 - 1;
        }

        if (ey8 == 18)
        {
            contact8 = 0;
        }

        printenemy8();
    }
    }
    
}

// checks if enemy 1 is alive then moves it
void moveEnemy1()
{

    if(counterforEnemy1<=1)
    {
    removeEnemy1();
    if (checkFirstEnemy)
    {
        if (contact1 == 0)
        {
            ey1 = ey1 + 1;
        }
        if (ey1 == 9)
        {
            contact1 = 1;
        }
        if (contact1 == 1)
        {
            ey1 = ey1 - 1;
        }

        if (ey1 == 1)
        {
            contact1 = 0;
        }

        printenemy1();
    }

    }
}
// checks if enemy 2 is alive then moves it
void moveEnemy2()
{
    if(counterforEnemy2<=1)
    {
    removeEnemy2();
    if (checkSecondEnemy)
    {
        if (contact2 == 0)
        {
            ey2 = ey2 - 1;
        }
        if (ey2 == 0)
        {
            contact2 = 1;
        }
        if (contact2 == 1)
        {
            ey2 = ey2 + 1;
        }

        if (ey2 == 8)
        {
            contact2 = 0;
        }
        printenemy2();
    }
    }
}
// checks if enemy 3 is alive then moves it
void moveEnemy3()
{
    if(counterforEnemy3<=1)
    {
    removeEnemy3();
    if (checkThirdEnemy)
    {
        if (contact3 == 0)
        {
            ex3 = ex3 - 1;
        }
        if (ex3 == 1)
        {
            contact3 = 1;
        }
        if (contact3 == 1)
        {
            ex3 = ex3 + 1;
        }

        if (ex3 == 33)
        {
            contact3 = 0;
        }
        printenemy3();
    }
    }
}
// checks if enemy 4 is alive then moves it
void moveEnemy4()
{
    if(counterforEnemy4<=1)
    {
    removeEnemy4();
    if (checkFourthEnemy)
    {
        if (contact4 == 0)
        {
            ex4 = ex4 - 1;
        }
        if (ex4 == 60)
        {
            contact4 = 1;
        }
        if (contact4 == 1)
        {
            ex4 = ex4 + 1;
        }

        if (ex4 == 91)
        {
            contact4 = 0;
        }
        printenemy4();
    }
    }
}

// checks if enemy 5 is alive then moves it
void moveEnemy5()
{
    if(counterforEnemy5<=1)
    {
    removeEnemy5();
    if (checkFifthEnemy)
    {
        if (contact5 == 0)
        {
            ey5 = ey5 + 1;
        }
        if (ey5 == 27)
        {
            contact5 = 1;
        }
        if (contact5 == 1)
        {
            ey5 = ey5 - 1;
        }

        if (ey5 == 21)
        {
            contact5 = 0;
        }
        printenemy5();
    }
    }
}

// checks if enemy 6 is alive then moves it

void moveEnemy6()
{
    if(counterforEnemy6<=1)
    {
    removeEnemy6();
    if (checkSixthEnemy)
    {
        if (contact6 == 0)
        {
            ey6 = ey6 - 1;
            ex6 = ex6 + 3;
        }
        if (ey6 == 11)
        {
            contact6 = 1;
        }
        if (contact6 == 1)
        {
            ey6 = ey6 + 1;
            ex6 = ex6 - 3;
        }

        if (ey6 == 18)
        {
            contact6 = 0;
        }
        printenemy6();
    }
    }
}

// functions to move hero
void moveHeroleft()
{
    if (getCharAtxy(px - 2, py) == ' ' && getCharAtxy(px - 2, py + 1) == ' ' && getCharAtxy(px - 2, py + 2) == ' ')
    {
        removeHero();
        px = px - 1;
        printhero();
    }
}
// to move hero right
void moveHeroright()
{
    if (getCharAtxy(px + 4, py) == ' ' && getCharAtxy(px + 4, py + 1) == ' ' && getCharAtxy(px + 4, py + 2) == ' ')
    {

        removeHero();
        px = px + 1;
        printhero();
    }

    if (getCharAtxy(px + 4, py) == 'H' || getCharAtxy(px + 4, py + 1) == 'H' || getCharAtxy(px + 4, py + 2) == 'H')
    {
        removeHero();
        px = px + 1;
        printhero();
    }

}
// to move hero up
void moveHeroup()
{
    if (getCharAtxy(px, py - 1) == ' ' && getCharAtxy(px - 1, py - 1) == ' ' && getCharAtxy(px + 3, py - 1) == ' ')
    {
        removeHero();
        py = py - 1;
        printhero();
    }
    
    
}
// to move hero down
void moveHerodown()
{
    if (getCharAtxy(px, py + 3) == ' ' && getCharAtxy(px - 1, py + 3) == ' ' && getCharAtxy(px + 3, py + 3) == ' ' && getCharAtxy(px + 1, py + 3) == ' ')
    {
        removeHero();
        py = py + 1;
        printhero();
    }
}


void removefire()
{
    gotoxy(bx, by);
    cout << " ";
}

// move the fires of the hero
void movefire()
{
    setcolor(10); //change colour
    removefire();

    // r means right direction
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
    //l means left direction
    else if (bulletDir == 'l')
    {
        if (getCharAtxy(bx - 3, by) != '#' || getCharAtxy(bx,by) != '#' || getCharAtxy(bx-1,by) !='#' || getCharAtxy(bx-2,by) !='#')
        {
            bx -= 3; // Move left
        }
        else
        {
            bulletActive = false;
        }
    }
   

    // bullet detecting enemy1
    if (getCharAtxy(bx, by) == '@')
    { 
        removefire();
        enemy1 -= 50;
        bulletActive = false; // Bullet should be inactive after hitting an enemy
       
    }

    // bullet detecting enemy2

    if (getCharAtxy(bx, by) == '$')
    { 
        gotoxy(bx,by);
        cout << " ";
        bulletActive = false;
        enemy2 -= 50;
        
       
    }
    // bullet detecting enemy3
    if (getCharAtxy(bx, by) == '&')
    {
        removefire();
        enemy3 -= 50;
        bulletActive = false;
        
    }

    // bullet detecting enemy4
    if (getCharAtxy(bx, by) == '*')
    {
        removefire();
        enemy4 -= 50;
        bulletActive = false;
        
    }
    // bullet detecting enemy5
    if (getCharAtxy(bx, by) == '8')
    {
        removefire();
        enemy5 -= 50;
        bulletActive = false;
        
    }
    // bullet detecting enemy6
    if (getCharAtxy(bx, by) == '%')
    {
        removefire();
        enemy6 -= 50;
        bulletActive = false;
        
    }
    // bullet detecting enemy8 (boss 2)
    if (getCharAtxy(bx, by) == 'A')
    {
        removefire();
        enemy8 -= 50;
        bulletActive = false;
        
    }
    // bullet detecting enemy7 (boss 1)
    if (getCharAtxy(bx, by) == 'X')
    {
        removefire();
        enemy7 -= 50;
        bulletActive = false;
        
    }

    // Check if the bullet has hit an enemy or reached the right edge of the screen
    if (getCharAtxy(bx, by) == '#' || bx >= 97 || by > 37 || by < 1 || getCharAtxy(bx + 1, by) == '#' || getCharAtxy(bx - 1, by) == '#' || bx <= 0 || getCharAtxy(bx + 2, by) == '#' || getCharAtxy(bx + 3, by) == '#' || getCharAtxy(bx - 2, by) == '#' || getCharAtxy(bx - 3, by) == '#')
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

void printEnemyBullets()
{
    // prints the bullets of the enemies for the first level
    if (bulletactiveE1)
    {
        setcolor(4);
        gotoxy(ebulletX1, ebulletY1);
        cout << "<";
    }
    if (bulletactiveE2)
    {
        setcolor(5);
        gotoxy(ebulletX2, ebulletY2);
        cout << ">";
    }
    if (bulletactiveE3)
    {
        setcolor(9);
        gotoxy(ebulletX3, ebulletY3);
        cout << "^";
    }
    if (bulletactiveE4)
    {
        setcolor(1);
        gotoxy(ebulletX4, ebulletY4);
        cout << "x";
    }
    if (bulletactiveE5)
    {
        setcolor(12);
        gotoxy(ebulletX5, ebulletY5);
        cout << "<<";
    }
    if (bulletactiveE6)
    {
        setcolor(13);
        gotoxy(ebulletX6, ebulletY6);
        cout << "<";
    }
}

void enemybulletfinalLevel()
{
    // prints the bullets of the enemies for the final level
    
    if (bulletactiveE7 && checkSeventhEnemy)
    {
        gotoxy(ebulletX7, ebulletY7);
        cout << "  ";
        setcolor(4);
        gotoxy(ebulletX7, ebulletY7);
        cout << ">>";
    }
    if (bulletactiveE8 && checkEightEnemy)
    {
        gotoxy(ebulletX8, ebulletY8);
        cout << "  ";
        setcolor(1);
        gotoxy(ebulletX8, ebulletY8);
        cout << "<<";
    }
}
// functions to move the bullets of the enemies for the first level
void moveEnemyBullet()
{
    
    if (bulletactiveE1 && checkFirstEnemy)
    {
        gotoxy(ebulletX1, ebulletY1);
        cout << " ";
        ebulletX1 -= 2;
        if (ebulletX1 <= 0 || ebulletX1 < 35 || getCharAtxy(ebulletX1, ebulletY1) == '#') // location of the bullet and where it can move
        {
            bulletactiveE1 = false;
        }
        // detection of the hero
        if (getCharAtxy(ebulletX1, ebulletY1) == 'o' || getCharAtxy(ebulletX1, ebulletY1) == '|' || getCharAtxy(ebulletX1, ebulletY1) == '\\' || getCharAtxy(ebulletX1, ebulletY1) == '/')
        {
            health -= 25;
        }
    }

    if (bulletactiveE2 && checkSecondEnemy)
    {
        gotoxy(ebulletX2, ebulletY2);
        cout << " ";
        ebulletX2 += 2;
        if (ebulletX2 >= 97 || ebulletX2 > 39 || getCharAtxy(ebulletX2, ebulletY2) == '#') // location of the bullet and where it can move
        {
            bulletactiveE2 = false;
        }
        // detection of the hero
        if (getCharAtxy(ebulletX2, ebulletY2) == 'o' || getCharAtxy(ebulletX2, ebulletY2) == '|' || getCharAtxy(ebulletX2, ebulletY2) == '\\' || getCharAtxy(ebulletX2, ebulletY2) == '/')
        {
            health -= 25;
        }
    }

    if (bulletactiveE3 && checkThirdEnemy)
    {
        gotoxy(ebulletX3, ebulletY3);
        cout << " ";
        ebulletY3 -= 2;
        if (ebulletY3 <= 20 || ebulletY3 >= 37 || getCharAtxy(ebulletX3, ebulletY3) == '#') // location of the bullet and where it can move
        {
            bulletactiveE3 = false;
        }
        // detection of the hero
        if (getCharAtxy(ebulletX3, ebulletY3) == 'o' || getCharAtxy(ebulletX3, ebulletY3) == '|' || getCharAtxy(ebulletX3, ebulletY3) == '\\' || getCharAtxy(ebulletX3, ebulletY3) == '/')
        {
            health -= 25;
        }
    }

    if (bulletactiveE6 && checkSixthEnemy)
    {
        gotoxy(ebulletX6, ebulletY6);
        cout << " ";
        ebulletX6 -= 1;
        if (ebulletX6 <= 20 || getCharAtxy(ebulletX6, ebulletY6) == '#') // location of the bullet and where it can move
        {
            bulletactiveE6 = false;
        }
        // detection of the hero
        if (getCharAtxy(ebulletX6, ebulletY6) == 'o' || getCharAtxy(ebulletX6, ebulletY6) == '|' || getCharAtxy(ebulletX6, ebulletY6) == '\\' || getCharAtxy(ebulletX6, ebulletY6) == '/')
        {
            health -= 25;
        }
    }

    if (bulletactiveE4 && checkFourthEnemy)
    {
        gotoxy(ebulletX4, ebulletY4);
        cout << " ";
        ebulletY4 += 2;
        if (ebulletY4 >= 22 || getCharAtxy(ebulletX4, ebulletY4) == '#') // location of the bullet and where it can move
        {
            bulletactiveE4 = false;
        }
        // detection of the hero
        if (getCharAtxy(ebulletX4, ebulletY4) == 'o' || getCharAtxy(ebulletX4, ebulletY4) == '|' || getCharAtxy(ebulletX4, ebulletY4) == '\\' || getCharAtxy(ebulletX4, ebulletY4) == '/')
        {
            health -= 25;
        }
    }

    if (bulletactiveE5 && checkFifthEnemy)
    {
        gotoxy(ebulletX5, ebulletY5);
        cout << "  ";
        ebulletX5 -= 2;
        if (ebulletX5 <= 20 || getCharAtxy(ebulletX5, ebulletY5) == '#') // location of the bullet and where it can move
        {
            bulletactiveE5 = false;
        }
        // detection of the hero
        if (getCharAtxy(ebulletX5, ebulletY5) == 'o' || getCharAtxy(ebulletX5, ebulletY5) == '|' || getCharAtxy(ebulletX5, ebulletY5) == '\\' || getCharAtxy(ebulletX5, ebulletY5) == '/')
        {
            health -= 25;
        }
    }
}

void moveBulletForfinal()
{
        
    if (bulletactiveE7 && checkSeventhEnemy)
    {
        gotoxy(ebulletX7, ebulletY7);
        cout << "  ";
        ebulletX7 += 2;
        if (ebulletX7 >= 60 || getCharAtxy(ebulletX7, ebulletY7) == '#' || getCharAtxy(ebulletX7 + 1, ebulletY7) == '#') // location of the bullet and where it can move
        {
            bulletactiveE7 = false;
        }
        // detection of the hero
        if (getCharAtxy(ebulletX7, ebulletY7) == 'o' || getCharAtxy(ebulletX7, ebulletY7) == '|' || getCharAtxy(ebulletX7, ebulletY7) == '\\' || getCharAtxy(ebulletX7, ebulletY7) == '/' || getCharAtxy(ebulletX7 + 1, ebulletY7) == 'o' || getCharAtxy(ebulletX7 + 1, ebulletY7) == '|' || getCharAtxy(ebulletX7 + 1, ebulletY7) == '\\' || getCharAtxy(ebulletX7 + 1, ebulletY7) == '/')
        {
            health -= 25;
        }
    }

        
    if (bulletactiveE8 && checkEightEnemy)
    {
        gotoxy(ebulletX8, ebulletY8);
        cout << "  ";
        ebulletX8 -= 2;
        if (ebulletX8 <= 40 || getCharAtxy(ebulletX8, ebulletY8) == '#' || getCharAtxy(ebulletX8 - 1, ebulletY8) == '#') // location of the bullet and where it can move
        {
            bulletactiveE8 = false;
        }
        // detection of the hero
        if (getCharAtxy(ebulletX8, ebulletY8) == 'o' || getCharAtxy(ebulletX8, ebulletY8) == '|' || getCharAtxy(ebulletX8, ebulletY8) == '\\' || getCharAtxy(ebulletX8, ebulletY8) == '/' || getCharAtxy(ebulletX8 - 1, ebulletY8) == 'o' || getCharAtxy(ebulletX8 - 1, ebulletY8) == '|' || getCharAtxy(ebulletX8 - 1, ebulletY8) == '\\' || getCharAtxy(ebulletX8 - 1, ebulletY8) == '/')
        {
            health -= 25;
        }
    }
}

void enemyShoot()
{
    // gives the green flag if the bullet of enemies is not active
    if (!bulletactiveE1)
    {
        ebulletX1 = ex1 + 2;
        ebulletY1 = ey1 + 1;
        bulletactiveE1 = true;
    }
    if (!bulletactiveE2)
    {
        ebulletX2 = ex2 + 2;
        ebulletY2 = ey2 + 1;
        bulletactiveE2 = true;
    }
    if (!bulletactiveE3)
    {
        ebulletX3 = ex3 + 1;
        ebulletY3 = ey3 - 2;
        bulletactiveE3 = true;
    }
    if (!bulletactiveE6)
    {
        ebulletX6 = ex6 + 2;
        ebulletY6 = ey6 + 1;
        bulletactiveE6 = true;
    }
    if (!bulletactiveE4)
    {
        ebulletX4 = ex4 + 1;
        ebulletY4 = ey4 + 2;
        bulletactiveE4 = true;
    }
    if (!bulletactiveE5)
    {
        ebulletX5 = ex5 + 2;
        ebulletY5 = ey5 + 1;
        bulletactiveE5 = true;
    }
}

void enemyShootFinal()
{
    // gives the green flag if the bullet of the enemies of the finale level and also sets the coordinates of the bullet of enemies

    if (!bulletactiveE7)
    {
        ebulletX7 = ex7 + 2;
        ebulletY7 = ey7 + 1;
        bulletactiveE7 = true;
    }
    if (!bulletactiveE8)
    {
        ebulletX8 = ex8 + 2;
        ebulletY8 = ey8 + 1;
        bulletactiveE8 = true;
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
// for changing of colours 
string setcolor(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}