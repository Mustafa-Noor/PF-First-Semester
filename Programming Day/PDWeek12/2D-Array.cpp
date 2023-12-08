#include <iostream>
#include <windows.h>
using namespace std;
void printboard(char board[15][58]);
void moveHeroLeft(char board[15][58]);
void moveHeroRight(char board[15][58]);
void moveHeroUp(char board[15][58]);
void moveHeroDown(char board[15][58]);
void moveEnemy(char board[15][58], char enemy, string &direction);
void printFire(char board[15][58]);
void moveFire(char board[15][58]);
bool wallCheck(char board[15][58]);

main()
{
    string dir1="right";
    string dir2="left";
    bool fired=false;
    char board[15][58] = 
    {   "#########################################################",
        "#                          #                            #",
        "#                          #                            #",
        "#             W            #          X                 #",
        "#                          #                            #",
        "#                                                       #",
        "#                                                       #",
        "#                                                       #",
        "#                                                       #",
        "#                                                       #",
        "#                                                       #",
        "#                            H                          #",
        "#                                                       #",
        "#                                                       #",
        "#########################################################"
    };


    while (true)
    {
        printboard(board);
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveHeroLeft(board);
            cout << "Left" << endl;
        }

        else if(GetAsyncKeyState(VK_RIGHT))
        {
            moveHeroRight(board);
            cout << "Right" << endl;
        }

        else if(GetAsyncKeyState(VK_UP))
        {
            moveHeroUp(board);
            cout << "Up" << endl;
        }

        else if(GetAsyncKeyState(VK_DOWN))
        {
            moveHeroDown(board);
            cout << "Down" << endl;
        }

        else if(GetAsyncKeyState(VK_SPACE))
        {
            if(!fired)
            {
            printFire(board);
            fired=true;
            }
        }



        if(fired)
        {
            if(wallCheck(board))
            {
                moveFire(board);
            }
            else
            {
                fired=false;
            }
        }

        moveEnemy(board, 'X', dir1);
        moveEnemy(board, 'W', dir2);
    }
}

void printboard(char board[15][58])
{
    string print="";
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<58; j++)
        {
            print+= board[i][j];
        }
        print +="\n";
    }
        system("cls");
        cout << print;
}

void moveHeroLeft(char board[15][58])
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<58; j++)
        {
            if(board[i][j]=='H')
            {
                board[i][j]=' ';
                if(j>1 && board[i][j-1]!='#')
                {
                board[i][j-1]='H';
                }
                else
                {
                    board[i][j]='H';
                }
                break;

            }
        }
    }
}

void moveHeroRight(char board[15][58])
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<58; j++)
        {
            if(board[i][j]=='H')
            {
                board[i][j]=' ';

                if(j<55 && board[i][j+1]!='#')
                {
                board[i][j+1]='H';
                }
                else
                {
                    board[i][j]='H';
                }

                break;
            }
        }
    }
}


void moveHeroUp(char board[15][58])
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<58; j++)
        {
            if(board[i][j]=='H')
            {
                board[i][j]=' ';

                if(i>1 && board[i-1][j]!='#')
                {
                board[i-1][j]='H';
                }
                else
                {
                    board[i][j]='H';
                }

                break;
            }
        }
    }
}

void moveHeroDown(char board[15][58])
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<58; j++)
        {
            if(board[i][j]=='H')
            {
                board[i][j]=' ';

                if(i<13)
                {
                board[i+1][j]='H';
                }
                else
                {
                    board[i][j]='H';
                }

                break;
                
            }
        }
    }
}


void moveEnemy(char board[15][58], char enemy, string &direction)
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<58; j++)
        {
            if(board[i][j]==enemy)
            {
                if(direction=="right")
                {
                    if(board[i][j+1]!='#')
                    {
                    board[i][j] = ' ';
                    board[i][j+1] = enemy;
                    break;
                    }
                    else{
                        direction="left";
                        break;
                    }

                }

                if(direction=="left")
                {
                    if(board[i][j-1]!='#')
                    {
                        board[i][j] = ' ';
                        board[i][j-1] = enemy;
                        break;
                    }
                    else
                    {
                        direction="right";
                        break;
                    }
                }
                
            }
        }
    }
}

void printFire(char board[15][58])
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<58; j++)
        {
            if(board[i][j]=='H')
            {
                board[i-1][j]='.';
                break;
            }
        }
    }
}

void moveFire(char board[15][58])
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<58; j++)
        {
            if(board[i][j]=='.')
            {
                if(board[i-1][j]=='W' || board[i-1][j]=='X')
                {
                    board[i-1][j]=' ';
                }
                else
                {
                board[i][j]=' ';
                board[i-1][j]='.';
                }
            }
        }
    }
}

bool wallCheck(char board[15][58])
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<58; j++)
        {
            if(board[i][j]=='.' && board[i-1][j]=='#')
            {
                board[i][j]=' ';
                return false;

            }
        }
    }

    return true;
}

