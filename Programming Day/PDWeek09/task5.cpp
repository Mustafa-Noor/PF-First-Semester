#include <iostream>
using namespace std;
int common(string s1, string s2);
main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    cout << "Number of common characters: " << common(s1, s2);
}

int common(string s1, string s2)
{
    int counter=0;
    int idx1=0;
    int idx2;
    int n=0;
    for(idx1=0; s1[idx1]!='\0'; idx1++)
    {
        
         for(idx2=n; s2[idx2]!='\0'; idx2++)
         {
            if(s1[idx1]==s2[idx2])
            {
                counter++; 
                n++;
                break;
            }
         }
        

       
    }

    return counter;
}