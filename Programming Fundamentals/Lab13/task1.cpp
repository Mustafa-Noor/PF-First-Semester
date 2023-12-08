#include <iostream>
#include <fstream>
using namespace std;
int countlines();

main()
{
    cout << "Total number of lines: " << countlines();
}

int countlines()
{
    string line;
    fstream file;
    int count=0;
    file.open("example.txt", ios::in);
    while(!file.eof())
    {
        getline(file, line);
        count++;
    }
    file.close();

    return count;
}