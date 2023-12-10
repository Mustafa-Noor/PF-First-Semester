#include <iostream>
#include <windows.h>
using namespace std;

void printmaze(char maze[][99], int mazeLength);
void printhero();
void gotoxy(int x, int y);


int px=17, py=15;

const int herolength=5, heroheight=3;

char hero[heroheight][herolength]=
{
        " o  ",
        "/|\\", 
        "/ \\" 
};


int main()
{
    int mazeLength=34;
    char maze[34][99] = 
    {
        "################################################################################################", 
        "#                                                                                              #", 
        "#                                                                                              #", 
        "#                                          #########                                           #", 
        "#                                          ##     ##                                           #", 
        "#                                          ##     ##                                           #", 
        "#                                          ##     ##                                           #", 
        "#                                                                                              #", 
        "#                                                                                              #", 
        "#                                                                                              #", 
        "#                                                                                              #", 
        "#######################              ###########################################################", 
        "#                     #                                    #                                   #", 
        "#                     #                                    #                                   #", 
        "#                     #                                    #                                   #", 
        "#                     #                                    #                                   #", 
        "#                p    #                                    #                                   #", 
        "#                     #                                    #                                   #", 
        "#              ########                                    #                                   #", 
        "#                                                          #                                   #", 
        "#                                                         ###                                  #", 
        "#                                   ###                                                        #", 
        "#                                    #                                                         #", 
        "#                                    #                                                         #", 
        "#                                    #                                                         #", 
        "#                                    #                                                         #", 
        "#                                    #                                                         #", 
        "#                                    #                                                         #", 
        "#                                    #                                                         #", 
        "#                                    #                                                         #", 
        "################################################################################################", 
        "#                                                                                              #", 
        "################################################################################################"
        };

    printmaze(maze, mazeLength);

}



void printmaze(char maze[][99], int mazeLength)
{
    string print="";
    for(int i=0; i<mazeLength; i++)
    {
        for(int j=0; j<99; j++)
        {
            if(maze[i][j]=='p')
            {
                px=i; py=j;
                printhero();
            }
            print+=maze[i][j];
        }
        print +="\n";
    }

    system("cls");
    cout << print;
}


void printhero()
{
    for(int x=0; x<heroheight; x++)
    {
        for(int j=0; j<herolength; x++)
        {
            gotoxy(px+x,py+j);
            cout << hero[x][j];
        }

    }
}


void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
    
