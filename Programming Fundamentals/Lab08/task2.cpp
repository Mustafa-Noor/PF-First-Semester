#include <iostream>
using namespace std;
int calculateDamage(string type, string optype, int attPower, int opDef);
main()
{
    int attPower, opDef;
    string type;
    string optype;

    cout << "My type: ";
    cin >> type;

    cout << "Opponent's type: ";
    cin >> optype;

    cout << "Attack Power: ";
    cin >> attPower;

    cout << "Opponent's Defense: ";
    cin >> opDef;

    cout << calculateDamage(type, optype, attPower, opDef);


}

int calculateDamage(string type, string optype, int attPower, int opDef)
{
    float effective;
    int damage=0;

    if( (type=="fire" && optype=="grass") || (type=="water" && optype=="fire") || (type=="grass" && optype=="water") ||(type=="electric" && optype=="water") )
    {
        effective=2;
    }

    if( (type=="fire" && optype=="electric") || (type=="electric" && optype=="grass") || (type=="grass" && optype=="electric") || (type=="electric" && optype=="fire"))
    {
        effective=1;
    }

    if( (type=="grass" && optype=="fire") || (type=="fire" && optype=="water") || (type=="water" && optype=="grass") ||(type=="water" && optype=="electric") )
    {
        effective=0.5;
    }


    damage=50*(attPower/opDef)*effective;

    return damage;




}