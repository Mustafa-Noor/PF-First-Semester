#include<iostream>
using namespace std;
float taxCalculator(char type, float price);
main()
{
        char type;
        float price;
        cout << "Enter the vehicle type code (M, E, S, V, T): ";
        cin >> type;
        cout << "Enter the price of the vehicle: $";
        cin >> price;
        float result;
        result =taxCalculator(type,price);
        cout << "The final price of a vehicle of type " << type << " after adding the tax is $" << to_string(result) <<".";


}


float taxCalculator(char type, float price)
{
        float finalprice, tax;

        if(type=='M'){
        tax = (price*6)/100;
        }

        if(type=='E'){
        tax = (price*8)/100;
        }

        if(type=='S'){
        tax = (price*10)/100;
        }

        if(type=='V'){
        tax = (price*12)/100;
        }

        if(type=='T'){
        tax = (price*15)/100;
        }

        finalprice = price+tax;
        return finalprice;
}