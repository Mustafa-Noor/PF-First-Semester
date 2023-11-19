#include <iostream>
using namespace std;
int rotations(string arr[], int size);
main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;

    string arr[size];
    cout << "Enter the elements of the array (\"left\" or \"right\"): " << endl;
    for(int idx=0; idx<size; idx++)
    {
        cin >> arr[idx];
    }

    cout << "Number of full rotations: " << rotations( arr, size);

}

int rotations(string arr[], int size)
{
    int rightcounter=0;
    int leftcounter=0;
    int left=0;
    int right=0;
    int sum=0;
    int result=0;
    for(int idx=0; idx<size; idx++)
    {
        if(arr[idx]=="right")
        {
            rightcounter++;
        }
        else if(arr[idx]=="left")
        {
            leftcounter++;
        }
    }

    right=rightcounter*90;
    left=leftcounter*90;
    if(right>left)
    {
        sum=right-left;
    }
    else
    {
        sum=left-right;
    }

    result=sum/360;

    return result;


}