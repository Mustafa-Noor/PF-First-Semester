#include <iostream>
using namespace std;
int noOfIdenticalRows(int elements[][3], int rows);

main()
{
    int rows;
    cout << "Enter the number of rows for the array: ";
    cin >> rows;
    int elements[rows][3];
    cout << "Enter the elements of the array: " << endl;
    for(int idx=0; idx<rows; idx++)
    {
        for(int x=0; x<3; x++)
        {
            cout << "Enter element at position [" << idx <<"][" << x << "]: ";
            cin >> elements[idx][x];
        }
    }

    cout << "The count of identical rows in the array is: " << noOfIdenticalRows(elements, rows);
}

int noOfIdenticalRows(int elements[][3], int rows)
{
    
    int counter=0;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j+2<3; j++)
        {
            if(elements[i][j]==elements[i][j+1] && elements[i][j]==elements[i][j+2])
            {
                counter++;
            }
        }

    }

    return counter;
}