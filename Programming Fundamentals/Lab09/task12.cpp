#include <iostream>
using namespace std;
bool isSpecialArray(int arr[], int size);
main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements of the array: " << endl;
    for(int idx=0; idx<size ; idx++)
    {
        cin >> arr[idx];
    }


    if(isSpecialArray(arr, size))
    {
        cout << "The array is special";
    }
    else
    {
        cout << "The array is not special";
    }

}

bool isSpecialArray(int arr[], int size)
{
    bool check1=false;
    bool check2=false;
    for(int idx=0; idx<size ; idx=idx+2)
    {
        if(arr[idx]%2!=0)
        {
            check1=true;
        }
        else
        {
            check1=false;
            break;
        }
    }

    for(int idx=1; idx<size ; idx=idx+2)
    {
        if(arr[idx]%2==0)
        {
            check2=true;
        }
        else
        {
            check2=false;
            break;
        }
    }


    if(check1 & check2==1)
    {
        return false;
    }

    else
    {
        return true;
    }
}