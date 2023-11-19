#include <iostream>
using namespace std;
int progress(int arr[], int size);
main()
{
    int size;
    cout << "Enter the number of Saturdays: ";
    cin >> size;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter miles run for Saturday " << idx+1 << ": ";
        cin >> arr[idx];
    }

    cout << "Total progress days: " << progress(arr, size);
}

int progress(int arr[], int size)
{
    int progress=0;
    for(int idx=0; idx<size-1; idx++)
    {
        if(arr[idx]<arr[idx+1])
        {
            progress++;
        }
    }

    return progress;
}