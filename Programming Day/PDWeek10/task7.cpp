#include <iostream>
using namespace std;
bool checkArr(int arr[], int size);
main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cin >> arr[idx];
    }

    cout << "Can be arranged: " << checkArr(arr, size);
}

bool checkArr(int arr[], int size)
{
    
}