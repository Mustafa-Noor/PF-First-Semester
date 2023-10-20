#include <iostream>
using namespace std;
int calculatePrice(int money, int year);
int main(){
    int money;
    int year;
    int result;
    int difference;

    cout << "Enter Money: ";
    cin >> money;

    cout << "Enter Year: ";
    cin >> year;

    result = calculatePrice(money, year);


    if(result<money){
        difference= money-result;
        cout << "Yes! He will live a carefree life and will have " << difference << " dollars left.";
    }

    if(result>money){
        difference= result-money;
        cout << "He will need " << difference << " dollars to survive.";
    }
}

int calculatePrice(int money, int year)
{
    int amount=0;
    int total=0;
    int timemachineyear=1800;
    int age =18;

    for(timemachineyear; timemachineyear<=year ; timemachineyear+=1)
    {

        if(timemachineyear%2==0){
            amount=12000;
        }

        else{
            amount=12000+50*(age);
        }

        total = total+amount;
         age = age+1;
    }

        
        return total;
}

