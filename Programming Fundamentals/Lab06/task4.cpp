#include <iostream>
using namespace std;

int findGreatest(int a, int b, int c);

main()
{
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    cout << "The greatest number among "<< a << ", "<< b << ", and " << c << " is: "<< findGreatest(a, b, c);
}

int findGreatest(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }
    if(b>=a && b>=c){
        return b;
    }
    if(c>=a && c>=b){
        return c;
    }

}