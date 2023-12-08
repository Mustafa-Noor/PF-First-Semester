#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string number;
    float number1;
    fstream file;
    file.open("example.txt", ios::in);
    file >> number;
    file >> number1;
    file.close();
    cout << "The number is : " << number << number1;

}