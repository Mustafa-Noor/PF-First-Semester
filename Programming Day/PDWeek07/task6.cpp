#include <iostream>
using namespace std;
bool isPrime(int number);
int primorial(int number);

main()
{
    int number;
    
    cout << "Enter Number: ";
    cin >> number;

    primorial(number);

}


int primorial(int number){
    int count=0;
    int res=1;
    int x=2;
    while(true){
        if(isPrime(x)){
            res = res*x;
            count ++;
         }

         x++;

         if(count==number){
            break;
         }

    }

    cout << res;

      
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
