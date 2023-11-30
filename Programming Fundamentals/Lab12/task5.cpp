#include <iostream>
using namespace std;
void matrix(int elements[3][3]);
bool checkIdentity(int elements[3][3]);


int main()
{
    int elements[3][3];

    cout << "Enter the elements of the matrix: " << endl;
    for(int idx=0; idx<3; idx++)
    {
        for(int x=0; x<3; x++)
        {
            cout << "Enter element at position [" << idx <<"][" << x << "]: ";
            cin >> elements[idx][x];
        }
    }

    matrix(elements);

    if(checkIdentity(elements))
    {
        cout << "The entered matrix is an identity matrix.";
    }
    else
    {
        cout << "The entered matrix is NOT an identity matrix.";
    }

}

void matrix(int elements[3][3])
{
    cout << "The matrix you entered is: " << endl;
    for(int idx=0; idx<3; idx++)
    {
        for(int x=0; x<3; x++)
        {
            cout << elements[idx][x] << "\t";
        }
        cout << endl;
    }
}

bool checkIdentity(int elements[3][3])
{
    for(int idx=0; idx<3; idx++)
    {
        if(elements[idx][idx]!=1)
        {
            return false;
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i!=j)
            {
                if(elements[i][j]!=0)
                {
                    return false;
                }
            }
        }
    }

    return true;
}