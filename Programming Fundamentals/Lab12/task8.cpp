#include <iostream>
using namespace std;
void matrix(int elements[][5], int rowSize);
int giveColN(int elements[][5], int rowSize);
void newMatrix(int elements[][5], int rowSize, int selCol);

main()
{
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;

    int elements[rowSize][5];
    cout << "Enter the elements of the matrix: " << endl;
    for(int idx=0; idx<rowSize; idx++)
    {
        for(int x=0; x<5; x++)
        {
            cout << "Enter element at position [" << idx <<"][" << x << "]: ";
            cin >> elements[idx][x];
        }
    }

    matrix(elements, rowSize);
    int selCol=giveColN(elements, rowSize);
    newMatrix(elements, rowSize, selCol);
}

void matrix(int elements[][5], int rowSize)
{
    cout << endl;
    cout << "Original Matrix:" << endl;
    for(int idx=0; idx<rowSize; idx++)
    {
        for(int x=0; x<5; x++)
        {
            cout << elements[idx][x] << " ";
        }
        cout << endl;
    }
}

int giveColN(int elements[][5], int rowSize)
{
    int sum=0;
    int var=0;

    for(int j=0; j<5 ; j++)
    {
        int temp=0;
        for(int i=0; i<rowSize; i++)
        {
            temp+=elements[i][j];

        }

        if(temp>sum)
        {
            sum=temp;
            var=j;
        }
    }

    return var;
}

void newMatrix(int elements[][5], int rowSize, int selCol)
{
    cout << endl;
    int temp;
    for(int idx=0; idx<rowSize; idx++)
    {
        temp=elements[idx][0];
        elements[idx][0]=elements[idx][selCol];
        elements[idx][selCol]=temp;
    }


    cout << "Matrix after largest column moved to first:" << endl;
    for(int idx=0; idx<rowSize; idx++)
    {
        for(int x=0; x<5; x++)
        {
            cout << elements[idx][x] << " ";
        }
        cout << endl;
    }


}