#include <iostream>
using namespace std;

string decideActvity(string temp, string humidity);

main()
{
    string temp, humidity;
    cout << "Enter temperature (warm or cold): ";
    cin >> temp;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;

    cout << "Recommended activity: "<< decideActvity(temp,humidity);


}

string decideActvity(string temp, string humidity)
{
    string activity;
    if(temp=="warm" && humidity=="dry"){
        activity="Play tennis";
    }
    if(temp=="warm" && humidity=="humid"){
        activity="Swim";
    }
    if(temp=="cold" && humidity=="dry"){
        activity="Play basketball";
    }
    if(temp=="cold" && humidity=="humid"){
        activity="Watch TV";
    }

    return activity;
}

