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
    string result="";
    int idx=0;
    int n=0;
    int counter=0;
    string moves[10];
    moves[0]="Shimmy";
    moves[1]="Shake";
    moves[2]="Pirouette";
    moves[3]="Slide";
    moves[4]="Box Step";
    moves[5]="Headspin";
    moves[6]="Dosado";
    moves[7]="Pop";
    moves[8]="Lock";
    moves[9]="Arabesque";

    

    while(pin[counter]!='\0')
    {
        counter++;

    }

    if(counter!=4)
    {
        cout << "Invalid input.";
        return;
    }

    for(int x=0; x<counter; x++)
    {
        if(!isdigit(pin[x]))
        {
            cout << "Invalid input.";
            return;
        }
    }

    for(int x=0; x<counter; x++)
    {
        idx=idx+(pin[x]-'0');

        if(idx>9)
        {
            idx=idx-10;
        }

        if(x==counter-1)
        {
            result=result+moves[idx];
        }
        else{
        result = result+moves[idx]+", ";
        }

        idx=n;
        idx++;
        n++;
    }


    cout << result;



}