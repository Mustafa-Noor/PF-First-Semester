#include <iostream>
using namespace std;
bool areSameNumber(int a, int b, int c);
main()
{
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    cout << areSameNumber(a, b, c);
}

bool areSameNumber(int a, int b, int c){
    if(a==b && b==c && c==a){
        return true;
    }
    else{
        return false;
    }
}