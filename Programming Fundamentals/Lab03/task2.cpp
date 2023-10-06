#include <iostream>
using namespace std;
int main()
{
	cout << "Enter weight in pounds: ";
	float weight;
	cin >> weight;
	float kilogram;
	kilogram = 0.45*weight;
	cout << weight <<" pounds is equal to " << kilogram <<" kilograms."<< endl;
}