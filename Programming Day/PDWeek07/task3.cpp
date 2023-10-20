#include <iostream>
using namespace std;
void amplified(int number);

main(){
    int number;

    cout << "Enter the number to Amplify: ";
    cin >> number;

    amplified(number);

}

void amplified(int number)
{
    int temp;

    for(int x=1; x<=number ; x++)
    {
        temp=x;
        if(temp%4==0){
            temp=temp*10;
        }
        else{
            temp=temp;
        }

        cout << temp;

        if(x<number){
            cout << ", ";
        }
        
    }
}