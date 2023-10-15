#include <iostream>
using namespace std;

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);

main()
{
    string fruit, dayOfWeek;
    double quantity;

    cout << "Enter the fruit name: ";
    cin >> fruit;

    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> dayOfWeek;

    cout << "Enter the quantity: ";
    cin >> quantity;

    if((dayOfWeek=="Sunday" || dayOfWeek=="Monday" || dayOfWeek=="Tuesday" || dayOfWeek=="Wednesday" || dayOfWeek=="Thursday" || dayOfWeek=="Friday" || dayOfWeek=="Saturday") && (fruit=="kiwi" || fruit=="orange" || fruit=="apple" || fruit=="banana" || fruit=="grapefruit" || fruit=="pineapple" || fruit=="grapes")){cout<< calculateFruitPrice(fruit, dayOfWeek, quantity);}
    else{   cout << "error";}
}

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float totalPrice;

    if(dayOfWeek=="Sunday" || dayOfWeek=="Saturday"){
        if(fruit=="banana"){
            totalPrice=quantity*2.70;
        }
        else if(fruit=="apple"){
            totalPrice=quantity*1.25;
        }
        else if(fruit=="orange"){
            totalPrice=quantity*0.90;
        }
        else if(fruit=="grapefruit"){
            totalPrice=quantity*1.60;
        }
        else if(fruit=="kiwi"){
            totalPrice=quantity*3.00;
        }
        else if(fruit=="pineapple"){
            totalPrice=quantity*5.60;
        }
        else if(fruit=="grapes"){
            totalPrice=quantity*4.20;
        }

        return totalPrice;
    }

    else if(dayOfWeek=="Monday" || dayOfWeek=="Tuesday" || dayOfWeek=="Wednesday" || dayOfWeek=="Thursday" || dayOfWeek=="Friday"){
        if(fruit=="banana"){
            totalPrice=quantity*2.50;
        }
        else if(fruit=="apple"){
            totalPrice=quantity*1.20;
        }
        else if(fruit=="orange"){
            totalPrice=quantity*0.85;
        }
        else if(fruit=="grapefruit"){
            totalPrice=quantity*1.45;
        }
        else if(fruit=="kiwi"){
            totalPrice=quantity*2.70;
        }
        else if(fruit=="pineapple"){
            totalPrice=quantity*5.50;
        }
        else if(fruit=="grapes"){
            totalPrice=quantity*3.85;
        }
    
        return totalPrice;
        }

    
    }


