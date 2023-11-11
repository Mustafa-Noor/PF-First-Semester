#include <iostream>
using namespace std;
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize);
main()
{
    int firstArraySize, secondArraySize;

    cout << "Enter the number of elements in the first array (must be 2): ";
    cin >> firstArraySize;
    cout << "Enter " << firstArraySize << " elements for the first array, one per line: "<< endl;

    int firstArray[firstArraySize];

    for(int x=0; x<firstArraySize ; x++)
    {
        cin >> firstArray[x];
    }



    cout << "Enter the number of elements for the second array: ";
    cin >> secondArraySize;
    cout << "Enter " << secondArraySize << " elements for the second array, one per line: "<< endl;

    int secondArray[secondArraySize];

    for(int x=0; x<secondArraySize ; x++)
    {
        cin >> secondArray[x];
 
    }

    insertArrayInMiddle( firstArray, firstArraySize, secondArray, secondArraySize);

}


void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{

    cout << "Resulting array: [";
        cout << firstArray[0] << ", ";
    

    for(int x=0; x<secondArraySize; x++)
    {
        cout << secondArray[x] << ", ";
    }
        cout << firstArray[1];    
    cout << "]";
}