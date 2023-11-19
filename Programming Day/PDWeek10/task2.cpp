#include <iostream>
using namespace std;
int count(string arr[], int size, char letter);
main()
{
    int size;
    cout << "Enter how many words you want to enter: ";
    cin >> size;

    string arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter word " << idx+1 << ": ";
        cin >> arr[idx];
    }

    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    cout << letter << " shows up " << count( arr, size, letter) << " times in the data.";
}

int count(string arr[], int size, char letter)
{
    int counter=0;
    string word;
    for(int idx=0; idx<size; idx++)
    {
        word=arr[idx];

        int x=0;
        while(word[x]!='\0')
        {
            if(word[x]==letter)
            {
                counter++;
            }

            x++;
        }
    }

    return counter;
}