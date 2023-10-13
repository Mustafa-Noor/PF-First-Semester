#include <iostream>
using namespace std;

float discount(string day, string month, float amount);

main()
{
    string day, month;
    float amount;

    cout << "Enter Purchase Day: ";
    cin >> day;

    cout << "Enter Purchase Month: ";
    cin >> month;

    cout << "Enter Purchase Amount: ";
    cin >> amount;

    cout << "Payable Amount after discount: " << discount(day, month, amount);

}

float discount(string day, string month, float amount)
{
    float discount = amount;
    if(day=="Sunday" && (month=="October" || month =="August" || month =="March"))
    { 
        discount = amount-(amount*0.10);
    }
    return discount;
}
