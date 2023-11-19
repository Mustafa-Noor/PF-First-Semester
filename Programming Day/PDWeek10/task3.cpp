#include <iostream>
using namespace std;
bool isRepeatingCycle(int arr[], int size, int length);
main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for(int idx=0; idx<size; idx++)
    {
        cin >> arr[idx];
    }

    int length;
    cout << "Enter the length of the cycle: ";
    cin >> length;

    cout << "Output: " << isRepeatingCycle(arr, size, length);
}

bool isRepeatingCycle(int arr[], int size, int length)
{
    if(length>=size)
    {
        return true;
    }

    else
    {
        for(int idx=0; idx<length; idx++)
        {
            if(idx+length<size)
            {
                if(arr[idx+length]!=arr[idx])
                {
                    return false;
                    break;
                }
            }
        }
    }

    return true;
}