#include <iostream>
using namespace std;
float perimeter(char shape, float side);
main()
{
    char shape;
    float side;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    cout << "Enter the value: ";
    cin >> side;

    cout << "The perimeter is: " << perimeter(shape, side);
}

float perimeter(char shape, float side)
{
    float perimeter;

    if(shape=='s'){
        perimeter = 4*side;
    }
    if(shape=='c'){
        perimeter = 6.28*side;
    }
    if(shape=='t'){
        perimeter = 3*side;
    }
    if(shape=='h'){
        perimeter = 6*side;
    }

    return perimeter;
}