#include <iostream>
using namespace std;
bool isLengthEven(string word);
main()
{
    string word;
    cout << "Enter a String: ";
    cin >> word;

   cout << isLengthEven(word);
}

bool isLengthEven(string word)
{
    int idx=0;

    while(word[idx]!='\0')
    {
        idx++;
    }

    if(idx%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}