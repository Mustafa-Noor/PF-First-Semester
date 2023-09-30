#include <iostream>
using namespace std;
int main ()
{
	cout << "Enter vegetable price per kilogram (in coins): ";
	float vegPrice;
	cin >> vegPrice;
	cout << "Enter fruit price per kilogram (in coins): ";
	float fruPrice;
	cin >> fruPrice;
	cout << "Enter total kilograms of vegetables: ";
	float kgVeg;
	cin >> kgVeg;
	cout << "Enter total kilograms of fruits: ";
	float kgfru;
	cin >> kgfru;
	float earning;
	earning = (kgVeg*vegPrice)+(kgfru*fruPrice);
	float final;
	final = earning/1.94;
	cout << "Total earnings in Rupees (Rps): " << final ;
}
	
	