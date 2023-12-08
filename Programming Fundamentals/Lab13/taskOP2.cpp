#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int a;
    cout << "Enter a number: ";
    fstream file;
    cin >>a;

    float b;
    cout << "Enter a decimal number: ";
    cin >> b;

    char c;
    cout << "Enter a character: ";
    cin >> c;

    file.open("example.txt", ios::out);
    file << a;
    file << endl;
    file << b;
    file << endl;
    file << c;

    file.close();
    

}