#include <iostream>
using namespace std;
void reverseWord(string sen);
main()
{
    string sen;
    cout << "Enter a string: ";
    getline(cin, sen);
    cout << "Reversed string: "; reverseWord(sen);
}

void reverseWord(string sen)
{
    
    int x=0;
    int idx=0;
    string word="";
    string arr[30];
    while(sen[x]!='\0')
    {
        if(sen[x] !=' ')
        {
            word+=sen[x];
        }
        else
        {
            arr[idx]=word;
            idx++;
            word="";
        }

        x++;
    }

    arr[idx] = word;

    for(int x=idx; x>=0; x--)
    {
        if(x==0)
        {
            cout << arr[x];
        }
        else
        {
        cout << arr[x] << " ";
        }
    }
}