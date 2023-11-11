#include <iostream>
using namespace std;
void jazzifyChords(string chords[], int numChords);
main()
{
    int numChords;
    cout << "Enter the number of chords: ";
    cin >> numChords;

    string chords[numChords];

    cout << "Enter " << numChords<< " chords, one per line: " << endl;
    for(int idx=0; idx<numChords ; idx++)
    {
        cin >> chords[idx];
    }

    
    jazzifyChords(chords, numChords);
}

void jazzifyChords(string chords[], int numChords)
{
    cout << "Jazzified chords: [";
    int x=0;
    for(int idx=0;idx<numChords ; idx++)
    {
        string word=chords[idx];
        while( word[x]!='\0')
        {
            x++;

        }

        if( word[x-1]=='7')
        {
        cout << word;
        } 
        else
        {
        cout << word << "7" ;
        }

        if(idx!=numChords-1){
        cout << ", ";
        }
        else
        {
            
        }
    }

    cout <<"]";
}