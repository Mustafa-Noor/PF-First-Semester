#include <iostream>
using namespace std;

float discount(string day, string month, float totalAmount);

main()
{
    string day, month;
    float totalAmount;

    cout << "Enter Purchase Day: ";
    cin >> day;

    cout << "Enter Purchase Month: ";
    cin >> month;

    cout << "Enter Purchase Amount: ";
    cin >> totalAmount;

    cout << "Payable Amount after discount: " << discount(day, month, totalAmount);

}

float discount(string day, string month, float totalAmount)
{
    float discount=totalAmount;

    if(day=="Sunday"){
        if(month=="October"){
            discount = totalAmount -(totalAmount*0.10);
        }
        if(month!="October"){
            discount = totalAmount -(totalAmount*0.05);

        }
    }

    return discount;
}
