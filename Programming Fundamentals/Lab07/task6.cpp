#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2 ,int gcd);
main()
{
    
    int number1, number2;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;


    int gcd = calculateGCD(number1, number2);
    cout << "GCD: " << gcd << endl;

    int lcm;
    lcm=calculateLCM(number1,number2, gcd);

    cout << "LCM: " << lcm;


}

int calculateGCD(int number1, int number2)
{
    while(number2!=0){
        int m;
        m=number2;
        number2 = number1 % number2;
        number1=m;
    }

    return number1;

}


int calculateLCM(int number1, int number2, int gcd)
{
    int result;

    result=(number1*number2)/gcd;

    return result;
}