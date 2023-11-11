#include <iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter Element " << idx+1 << ": ";
        cin >> arr[idx];
    }

    int n;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;

    evenOddTransform(arr, size, n);
}

void evenOddTransform(int arr[], int size, int n)
{
    cout << "[";
    for(int idx=0; idx<size ; idx++)
    {
        if(arr[idx]%2==0)
        {
            for(int x=0; x<n; x++)
            {
                arr[idx]=arr[idx]-2;
            }
        }

        else if(arr[idx]%2!=0)
        {
            for(int x=0; x<n; x++)
            {
                arr[idx]=arr[idx]+2;
            }
        }

        cout << arr[idx];

        if(idx!=size-1)
        {
            cout << ", ";
        }
        else{
        
        }
    }

    cout <<"]";

}