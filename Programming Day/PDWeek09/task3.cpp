#include <iostream>
using namespace std;
bool areAllElementsIdentical(string elements[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    string elements[size];
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter Element " << idx+1 <<": ";
        cin >> elements[idx];
    }

    cout << areAllElementsIdentical(elements, size);
}

bool areAllElementsIdentical(string elements[], int size)
{
    string word=elements[0];
    int x=0;
    int idx=0;
    for(idx; idx<size; idx++)
    {
        if(word==elements[idx])
        {
            x++;
        }
    }

    if(idx==x)
    {
        return true;
    }
    else
    {
        return false;
    }
}