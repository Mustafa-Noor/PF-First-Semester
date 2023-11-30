#include <iostream>
using namespace std;
string giveAnswer(string battleShip[5][5], string cord);

main()
{
    string battleShip[5][5]={ {".",".",".","*","*"},
                            {".","*",".",".","."},
                            {".","*",".",".","."},
                            {".","*",".",".","."},
                            {".","*","*","*","."} };


    string cord;
    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin >> cord;

    cout << "Result: " << giveAnswer(battleShip, cord);

}

string giveAnswer(string battleShip[5][5], string cord)
{
    string result;
    char alpha;
    int num1, num2;
    alpha=cord[0];
    num2=cord[1]-'0';
    num2=num2-1;

    if(alpha=='A')
    {
        num1=0;
    }
    else if(alpha=='B')
    {
        num1=1;
    }
    else if(alpha=='C')
    {
        num1=2;
    }
    else if(alpha=='D')
    {
        num1=3;
    }
    else if(alpha=='E')
    {
        num1=4;
    }


    if(battleShip[num1][num2]==".")
    {
        result="splash";
    }
    else if(battleShip[num1][num2]=="*")
    {
        result="BOOM";
    }

    return result;

}