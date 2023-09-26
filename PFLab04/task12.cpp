#include <iostream>
using namespace std;
void discount(string day, float amount);
main()
{	while (true){
	string days;
	float total;
	cout << "Enter the day: ";
	cin >> days;
	cout << "Enter the total purchase amount: $";
	cin >> total;
	discount(days, total);}
}

void discount(string day, float amount)
{
	float answer;
	if (day =="Sunday"){
	answer = amount-(amount*10/100);
	}
	if (day !="Sunday"){
	answer = amount -(amount*5/100);
	}
	cout << "Total Payable Amount is: $" << answer << endl;
}