#include <iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
main()
{
    string correctPhrase;
    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase);
    string actualTyped;
    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);

    cout << "Broken keys: " << findBrokenKeys(correctPhrase, actualTyped);

}

string findBrokenKeys(string correctPhrase, string actualTyped)
{
    int idx=0;
    string res;
    while(correctPhrase[idx]!='\0')
    {
        bool check=false;
        if(correctPhrase[idx]!=actualTyped[idx])
        {
           
            int x=0;
            while(res[x]!='\0')
            {
                if(res[x]==correctPhrase[idx])
                {
                    check=true;
                }
                x++;
            }

            if(check==false)
            {
            res = res + correctPhrase[idx];
            }
            
        }

        
        
        idx++;
    }

    return res;
}