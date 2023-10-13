#include <iostream>
using namespace std;

string greaterOrLess(int a, int b);

main(){
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << greaterOrLess(a, b);

}

string greaterOrLess(int a, int b)
{
    string truefalse;
    if(a>b){
        truefalse="1";
    }
    else{

        truefalse="0";
    }

    return truefalse;
}