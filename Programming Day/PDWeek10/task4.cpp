#include <iostream>
using namespace std;
int volume(int arr[], int size);
main()
{
    int box;
    cout << "Enter the number of boxes: ";
    cin >> box;

    int size=box*3;
    int arr[size];
    cout << "Enter the dimensions of the boxes (length, width, height):" << endl;
    for(int idx=0; idx<size; idx++)
    {
        cin >> arr[idx];
    }

    cout << "Total volume of all boxes: " << volume(arr, size);

}

int volume(int arr[], int size)
{
    int final=1;
    int x=0;
    int sum=0;
    int multiple=1;
    for(int idx=0; idx<size; idx++)
    {
        multiple=multiple*arr[idx];
        if((idx+1)%3==0)
        {
            sum=sum+multiple;
            multiple=1;
        }
    }
        

    return sum;
}