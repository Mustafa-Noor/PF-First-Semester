#include <iostream>
using namespace std;
void sort(int arr[]);
main()
{
    cout << "Enter the weights of the 10 packages:" << endl;
    int arr[10];
    for(int idx=0; idx<10; idx++)
    {
        cin >> arr[idx];
    }

    sort(arr);
}

void sort(int arr[])
{
    cout << "Sorted array in ascending order: [";
    for(int idx=0; idx<9; idx++)
    {

        for(int x=idx+1; x<10; x++)
        {
            if(arr[x]<arr[idx])
            {
                int temp=arr[x];
                arr[x]=arr[idx];
                arr[idx]=temp;
            }
        
        }
    
    }

    for(int x=0; x<10; x++)
    {
        if(x==9)
        {
            cout << arr[x] <<"]";
        }
        else
        {
        cout << arr[x] <<", ";
        }
    }
}

