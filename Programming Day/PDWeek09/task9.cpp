#include <iostream>
using namespace std;
string longest7segmentWord(string words[], int size);
main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;

    cout << "Enter the words, one by one: " << endl;;
    string words[size];
    for(int idx=0; idx<size; idx++)
    {
        cin >> words[idx];
    }

    cout << "Longest 7-segment word: " << longest7segmentWord(words, size);
}

string longest7segmentWord(string words[], int size)
{
    string result;
    int length=0;

    for(int idx=0; idx<size; idx++)
    {
        bool check=false;
        string word=words[idx];
        int x=0;
        int counter=0;
        

        while(word[x]!='\0')
        {
            if(word[x]=='k' || word[x]=='m' || word[x]=='v' || word[x]=='w' || word[x]=='x')
            {
                check=true;
            }

            counter++;

            x++;
        }


        if(check==false && counter>length)
        {
            result=word;
            length=counter;
        }
        
        

    }

    return result;
}