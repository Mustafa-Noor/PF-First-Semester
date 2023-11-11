#include <iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size);

main()
{
    int size;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> size;

    double resistance[size];

    cout << "Enter the resistance values (in ohms) of the " << size << " resistors, one per line: " << endl;
    for(int x=0; x<size ; x++)
    {
        cin >> resistance[x];
    }

    cout << "The total resistance of the series circuit is " << calculateTotalResistance( resistance, size) << " ohms.";
}

double calculateTotalResistance(double resistance[], int size)
{
    double sum=0;

    for(int x=0; x<size; x++)
    {
        sum = sum + resistance[x];
    }

    return sum;
}