#include <iostream>
using namespace std;
void discount(string name, float price);
main ()
{
	string country;
	cout << "Enter the country's name: ";
	cin >> country;
	float ticket;
	cout << "Enter the ticket price in dollars: $";
	cin >> ticket;
	discount(country, ticket);
}
void discount(string name, float price)
{	float newPrice;
	if(name=="Pakistan"){
	newPrice = price-(price*5/100);
	}
	if(name=="Ireland"){
	newPrice = price-(price*10/100);
	}
	if(name=="India"){
	newPrice = price-(price*20/100);
	}
	if(name=="England"){
	newPrice = price-(price*30/100);
	}
	if(name=="Canada"){
	newPrice = price-(price*45/100);
	}
	cout << "Final ticket price after discount: $" << newPrice;
}