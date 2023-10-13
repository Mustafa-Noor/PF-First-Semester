#include <iostream>
using namespace std;
float lowestPrice(int n, string day);
main()
{
    int n;
    string day;

    cout << "Enter the number of kilometers: ";
    cin >> n;

    cout << "Enter the period of the day (day/night): ";
    cin >> day;

    cout << "Lowest price for "<< n << " kilometers: "<< lowestPrice(n, day) << " EUR" ;


}

float lowestPrice(int n, string day){
    float price;
    if(n<20){
        if(day=="day"){
            price = (n*(0.79))+.70;
        }
        if(day=="night"){
            price = (n*(0.90))+.70;
        }
    }

    if(n>=20 && n<100){
        price = n*(0.09);
    }
    if(n>=100){
        price = n*(0.06);
    }

    return price;
    



}