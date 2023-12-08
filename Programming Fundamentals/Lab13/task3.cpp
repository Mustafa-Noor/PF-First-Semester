#include <iostream>
#include <fstream>
using namespace std;
int calculateFrequency();
main()
{
    cout << "Total number of characters: " <<calculateFrequency(); 
}

int calculateFrequency()
{
    string line;
    fstream file;
    int freq=0;
    file.open("example.txt", ios::in);
    while(!file.eof())
    {
        getline(file, line);
        int idx=0;
        while(line[idx]!='\0')
        {
            if(line[idx]=='s'|| line[idx]=='S')
            {freq++;}
            idx++;
        }
    }



    return freq;
}
