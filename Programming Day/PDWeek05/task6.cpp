#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2);
main()
{
    int number1,number2;
    int gcd;


    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    gcd = calculateGCD(number1, number2);

    cout << "GCD: "<< gcd;

}

int calculateGCD(int number1, int number2){
    
}