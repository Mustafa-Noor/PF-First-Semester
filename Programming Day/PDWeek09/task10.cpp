#include <iostream>
using namespace std;
void convertPINToDance(string pin);
main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;

    convertPINToDance(pin);
}

void convertPINToDance(string pin)
{
    string moves[10];
    moves[0]="Shimmy";
    moves[1]="Shake";
    moves[2]="Piroutte";
    moves[3]="Slide";
    moves[4]="Box Step";
    moves[5]="Headspin";
    moves[6]="Dosado";
    moves[7]="Pop";
    moves[8]="Lock";
    moves[9]="Arabesque";

    int selection;

    for(int idx=0; idx<4; idx++)
    {
        int x=0;
        int value=pin[x]-'0';
        selection=idx+value;
        cout << moves[selection];
    }
}
