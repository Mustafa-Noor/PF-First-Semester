#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);
int main()
{
    int number, digit;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the digit to check: ";
    cin >> digit;

    frequencyChecker(number, digit);


}


int frequencyChecker(int number, int digit)
{
    int frequency=0;
    int a=number%10;

 while(number>0){

    if(a==digit){
        frequency=frequency+1;
    }
     number = number/10;
     a = number%10;
 }


    cout << "Frequency: " << frequency;


}