#include <fstream>
#include <iostream>
using namespace std;
main()
{
    fstream file;
    file.open("example.txt", ios::out);
    file<<"This is sample text";
    file.close();
}
