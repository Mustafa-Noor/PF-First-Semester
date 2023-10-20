#include <iostream>
using namespace std;
void dots(int number);
main()
{
    int number;

    cout << "Enter number of Triangle: ";
    cin >> number;

    dots(number);
}


void dots(int number)
{
    int result=0;
    for(int x=1; x<=number; x++)
    {
        result=x+result;
    }

    cout << "Dots in the Triangle: " << result;
}