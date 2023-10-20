#include <iostream>
using namespace std;
int calculateMoney(int age, int machineprice, int price);
int main(){
    int age, machineprice, price;
    int result;
    int dif;

    cout << "Enter Lilly's age: ";
    cin >> age;

    cout << "Enter the price of the washing machine: ";
    cin >> machineprice;

    cout << "Enter the unit price of each toy: ";
    cin >> price;

    result =calculateMoney(age, machineprice, price);

    if(result>=machineprice){
        dif=result-machineprice;
        cout << "Yes!" << endl;
        cout << dif ;
    }

    if(result<machineprice){
        dif=machineprice-result;
        cout << "No!" << endl;
        cout << dif ;
    }

}

int calculateMoney(int age, int machineprice, int price)
{
    int remAmount=0;
    int amount=0;
    int increase=10;
    int toy=0;



    for(int x=1; x<=age ; x=x+1)
    {
        if(x%2==0){
            amount=(amount+increase)-1;
            increase=increase+10;
            remAmount=amount+(toy*price);
        }

        else{
            toy=toy+1;
            remAmount=amount+(toy*price)-price;
        }

    }

    
    return remAmount;
}