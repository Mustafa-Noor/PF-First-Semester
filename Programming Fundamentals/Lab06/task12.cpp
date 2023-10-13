#include <iostream>
using namespace std;
float totalIncome(string type, int rows, int columns);
main()
{
    int rows, columns;
    string type;

    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> type;
    
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> columns;

    cout << totalIncome(type, rows, columns);
}

float totalIncome(string type, int rows, int columns)
{
    float income;
    if(type=="Premiere"){
        income = rows*columns*12;
    }
    if(type=="Normal"){
        income = rows*columns*7.5;
    }
    if(type=="Discount"){
        income = rows*columns*5;
    }

    return income;
}