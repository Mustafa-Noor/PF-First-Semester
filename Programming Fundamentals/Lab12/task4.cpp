#include <iostream>
using namespace std;
int findSum(int elements[][3],int rowsize);

int main()
{
    int rowsize;
    cout << "Enter row size: ";
    cin >> rowsize;

    int elements[rowsize][3];
    cout << "Enter the elements of the matrix: "<< endl;
    for(int idx=0; idx<rowsize; idx++)
    {
        for(int x=0; x<3; x++)
        {
            cout << "Enter element at position [" << idx <<"][" << x << "]: ";
            cin >> elements[idx][x];
        }
    }

    cout << "The sum of elements in the matrix is: " << findSum(elements, rowsize);
}


int findSum(int elements[][3],int rowsize)
{
    int sum=0;
    for(int idx=0; idx<rowsize; idx++)
    {
        for(int x=0; x<3; x++)
        {
            sum+=elements[idx][x];
        }
    }

    return sum;
}