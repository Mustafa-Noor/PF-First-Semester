#include <iostream>
using namespace std;
void uniqueNum(int list[],int x);

bool isAlreadyEntered(int list[], int x, int n)
{
    if(list[x]==n)
    {
        return true;
    }
    else{
        return false;
    }
}
main()
{
    int idx;
    cout << "Enter the number of elements: ";
    cin >> idx;
    cout << "Enter " << idx << " numbers, one per line: " << endl;

    int list[idx];
    int n;
    for(int x=0; x<idx; x++)
    {   
        cin >> list[x];
        isAlreadyEntered(list, x, n);

        if(isAlreadyEntered(list, x, n))
        {
            cout << "Already Entered: " << list[x] << endl;
        }

        n=list[x];

    }
    uniqueNum(list, idx);
}

void uniqueNum(int list[],int idx)
{
    int n;
    cout << "Unique numbers entered: ";
    for(int x=0; x<idx ; x++)
    {
        if(isAlreadyEntered(list, x, n)==0)
        { 
            cout << list[x] << " ";
        }

        n=list[x];
    }
}