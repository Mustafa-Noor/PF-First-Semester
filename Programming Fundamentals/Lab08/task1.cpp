#include <iostream>
using namespace std;
bool brickFits(int width, int length, int height, int widthH, int heightH);
main()
{
    int width, height, length, widthH, heightH;

    cout << "Enter the height of brick: ";
    cin >> height;
    cout << "Enter the width of brick: ";
    cin >> width;
    cout << "Enter the length of brick: ";
    cin >> length;

    cout << "Width of hole: ";
    cin >> widthH;

    cout << "Height of hole: ";
    cin >> heightH;

   cout << brickFits(width, length, height, widthH, heightH);

}

bool brickFits(int width, int length, int height, int widthH, int heightH)
{

    if( (heightH>=height) && (widthH>=length || widthH>=width))
    {
        return true;
    }

   if( (heightH>=length) && (widthH>=height|| widthH>=width))
    {
        return true;
    }

    if( (heightH>=width) && (widthH>=length||widthH>=height))
    {
        return true;
    }

    else{
        return false;
    }
}