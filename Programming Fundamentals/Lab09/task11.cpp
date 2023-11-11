#include <iostream>
using namespace std;
void vowelRem(string sen);
main()
{
    string sen;
    cout << "Enter a string: ";
    getline(cin, sen);
    cout << "String with vowels removed: "; vowelRem(sen);

}

void vowelRem(string sen)
{
    int idx=0;
    int ascii;
    while(sen[idx]!='\0')
    {
        ascii=sen[idx];

        if(ascii==65 ||  ascii==69 || ascii==73 || ascii==79 || ascii==85 || ascii==97 || ascii==101 || ascii==105 || ascii==111 || ascii==117)
        {
            
        }
        else
        {
            cout << char(ascii);
        }

        
        idx++;
    }
}