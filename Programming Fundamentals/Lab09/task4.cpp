#include <iostream>
using namespace std;
void reverseArray(int list[], int idx);
main()
{
    int idx;
    cout << "Enter the number of elements: ";
    cin >> idx;


    if (idx <= 0)
    {
        cout << "Invalid input. Number of elements must be greater than 0." << endl;
    }

    int list[idx];

    cout << "Enter " << idx << " numbers, one per line: " << endl;
    for(int x=0; x<idx ; x++)
    {
        cin >> list[x];
    }

    cout << "Numbers in reverse order: ";
    reverseArray( list, idx);

}

void reverseArray(int list[], int idx)
{
    for(int x=idx-1; x>=0 ; x--)
    {
        cout << list[x] <<" ";
    }
    cout << endl;
}