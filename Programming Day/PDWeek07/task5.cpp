#include <iostream>
using namespace std;
bool isPrime(int number);
main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;

   cout << isPrime(number);

}

bool isPrime(int number)
{
    int result;
    for(int x=2; x<number; x++)
    {
        result=number%x;

        if(result==0){
            return false;
            break;
        }

    
    }

    return true;
}