#include <iostream>
using namespace std;
void reverse(string word);
main()
{
    string word;
    cout << "Enter a string: ";
    cin >> word;
    cout << "Reversed String: ";reverse(word);
}


void reverse(string word)
{

    int idx=0;
    while(word[idx]!='\0')
    {
        idx++;
    }
    
    for(int n=idx-1; n>=0; n--)
    {
        cout << word[n];
    }
}