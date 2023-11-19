#include <iostream>
#include <algorithm>
using namespace std;
int special(int arr[], int size);
main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for(int idx=0; idx<size; idx++)
    {
        cin >>arr[idx];
    }

    cout << "Special value: " << special(arr,size); 
}

int special(int arr[], int size)
{
    int counter=0;
    int special=0;

    for(int idx=0; idx<size; idx++)
    {
        if(arr[idx]>0)
        {
            counter++;
        }
    }

    for(int x=0; x<size; x++)
    {
        if(arr[x]>0 && arr[x] >=counter)
        {
            special++;
        }
    }

    if(special!=0)
    {
        return special;
    }
    else
    {
        return -1;
    }
    
}