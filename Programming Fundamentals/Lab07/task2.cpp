#include <iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
    int length;
    
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;

    generateFibonacci(length);


}

void generateFibonacci(int length)
{
    int n1=0, n2=1;
    int sum;


    for(int x=0; x<length; x=x+1)
    {   
        sum = n1+n2;
        cout << n1;


        if(x<(length-1))
        {
            cout << ", ";
        }

        n1=n2;
        n2=sum; 
      
   
    }
}
    