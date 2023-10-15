#include <iostream>
using namespace std;
string checkPointPosition(int h, int x, int y);
main()
{
    int h, x, y;

    cout << "Enter height: ";
    cin >> h;

    cout << "Enter x coordinate: ";
    cin >> x;

    cout << "Enter y coordinate: ";
    cin >> y;

    cout << checkPointPosition(h, x, y);

}

string checkPointPosition(int h, int x, int y)
{
    string position;

    if(((x==0*h) || (x==3*h)) && (y==0*h))
    {
        position ="Border";
    }
    else if((x==1*h) && ((y==4*h) || (y==1*h)))
    {
        position ="Border";
    }
    else if((x==2*h) && ((y==1*h) || (y==4*h)))
    {
        position ="Border";
    }
    else if((x==0*h) && (y==2*h))
    {
        position ="Border";
    }
    else if((x==3*h) && (y==1*h))
    {
        position ="Border";
    }


    else if( ((x>0 && x<(3*h)) && (y>0 && y<(1*h)))   || ((x>(1*h) && x<(2*h))  && (y>(1*h) && y<(4*h))) ){
        position ="Inside";
    }
    else{
        position="Outside";
    }




    return position;
}