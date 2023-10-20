#include <iostream>
using namespace std;
int digitSum(int number);
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    digitSum(number);

}

int digitSum(int number)
{
    int sum=0;

    while(number!=0){
        int a;
        a = number%10;
        number = number/10;

        sum = sum+a;

    }

    cout << "Sum of digits: " << sum;
    
}