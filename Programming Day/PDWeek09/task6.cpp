#include <iostream>
using namespace std;
int coloringTime(string col[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    string col[size];
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter Element "<< idx+1 << ": ";
        cin >> col[idx];
    }

    cout << "Time to color: " << coloringTime(col,size) <<" seconds";

}

int coloringTime(string col[], int size)
{
    int sec=0;
    string b=col[0];
    for(int idx=0; idx<size; idx++)
    {   
         if(col[idx]==b)
         {
            sec=sec+2;
         }
         else
         {
            sec=sec+3;
         }

         b=col[idx];
    }

    return sec;
}