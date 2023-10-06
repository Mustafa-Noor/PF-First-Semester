#include<iostream>
using namespace std;
string taxCalculator(char type, int price);
main()
{
        char type;
        int price;
        cout << "Enter the vehicle type code (M, E, S, V, T): ";
        cin >> type;
        cout << "Enter the price of the vehicle: $";
        cin >> price;
        string result;
        result =taxCalculator(type,price);
        cout << result;


}


string  taxCalculator(char type, int price)
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
        return "The final price of a vehicle of type " +string(1,type)+ " after adding the tax is $" +to_string(finalprice)+".";
}