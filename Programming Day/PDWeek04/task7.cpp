#include <iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
main()
{
	int red;
	cout << "Red Rose: ";
	cin >> red;
	int white;
	cout << "White Rose: ";
	cin >> white;
	int tulips;
	cout << "Tulips: ";
	cin >> tulips;
	flowerShop(red, white, tulips);
}
void flowerShop(int redRose, int whiteRose, int tulip)
{
	float redPrice;
	redPrice = redRose*2;
	float whitePrice;
	whitePrice = whiteRose*4.10;
	float tulipPrice;
	tulipPrice = tulip*2.50;
	
	float ogPrice;
	ogPrice = redPrice+whitePrice+tulipPrice;
	cout << "Original Price: $" << ogPrice << endl;

	float discount;	
	if (ogPrice > 200){
	discount = ogPrice-(ogPrice*20/100);
	cout << "Price after Discount: $" << discount ;
	}
	if (ogPrice < 200){
	cout << "No discount applied.";
	}
}
	

