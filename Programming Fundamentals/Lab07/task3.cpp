#include <iostream>
using namespace std;
int totalDigits(int number);
int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    totalDigits(number);


}

int totalDigits(int number)
{
    int x;

    for(x=0; number!=0; x=x+1 ){
        number=number/10;
    }

    cout << "Total number of digits: "<< x ;
}