#include <iostream>
using namespace std;
void nextletter(string word);
main()
{
    string word;
    cout << "Enter a String: ";
    getline(cin,word);
    cout << "Shifted String: ";nextletter(word);
}

void nextletter(string word)
{
    int idx=0;
    int ascii, nascii;
    char result;
    while(word[idx]!='\0')
    {
        
        if(word[idx]=='Z')
        {
            word[idx]='@';
        }

        if(word[idx]=='z')
        {
            word[idx]='`';
        }

        ascii=word[idx];
        nascii=ascii+1;

        if(nascii==33)
        {
            nascii=32;
        }

        cout << char(nascii);

        idx++;
    }
}