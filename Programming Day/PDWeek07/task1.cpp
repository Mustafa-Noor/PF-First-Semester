#include <iostream>
using namespace std;
void diamond(int numRows);

main()
{
    int numRows;

    cout << "Enter desired number of rows: ";
    cin >> numRows;

    diamond(numRows);

}

void diamond(int numRows)
{
    for(int rows=numRows; rows>=1 ; rows--)
    {
        for(int col=rows; col >=1 ; col--)
        {
            cout << "*";
        }

        cout << endl;

    }

}