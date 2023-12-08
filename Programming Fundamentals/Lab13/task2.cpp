#include <iostream>
#include <fstream>
using namespace std;
int countCharacters();

main()
{
    cout << "Total number of characters : " << countCharacters();
}

int countCharacters()
{
    fstream file;
    string line;
    file.open("example.txt", ios::in);
    int count=0;
    while(!file.eof())
    {
        int idx=0;
        getline(file, line);
        while(line[idx]!='\0')
        {
            idx++;
            count++;
        }
    }

    return count;
}