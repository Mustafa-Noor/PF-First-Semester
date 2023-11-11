#include <iostream>
using namespace std;
int findLargestNumber(int list[], int idx);

main()
{
    int idx;
    cout << "Enter the number of elements: ";
    cin >> idx;

    int list[idx];

    cout << "Enter " << idx << " numbers, one per line: " << endl;
    for(int x=0; x<idx ; x++)
    {
        cin >> list[x];
    }
    
    cout << "The largest number entered is: " << findLargestNumber( list, idx);

}

int findLargestNumber(int list[], int idx)
{
    int x=0;
    int largest=list[x];
    for(x; x<idx; x++)
    {
        int n=list[x];
        if(largest>=n)
        {
            largest=largest;
        }
        else{
            largest=n;
        }

    }
    return largest;
}