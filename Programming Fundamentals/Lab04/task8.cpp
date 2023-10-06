#include <iostream>
using namespace std;
void calculatePayableAmount(float amount, string day);

main()
{
	string days;	
	cout << "Enter the day of purchase: ";
	cin >> days;
	float price;
	cout << "Enter the total purchase amount: $";
	cin >> price;
	calculatePayableAmount( price, days);
}
void calculatePayableAmount(float amount, string day)
{
	float result;
	if (day=="Sunday"){
	result = amount-(amount*10/100);
	}
	if (day!="Sunday"){
	result = amount;
	}
	cout << "Payable Amount: $" << result ;
}
	
	
	
	  
	
	