#include <iostream>
using namespace std;

float amount(char serviceCode, char time, float minUsed);

main()
{
    char serviceCode, time;
    float minUsed;
    string serviceType;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;

    if(serviceCode=='P' || serviceCode=='p'){
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
    }

    cout << "Enter the number of minutes used: ";
    cin >> minUsed;

    if(serviceCode=='P' || serviceCode=='p'){
        serviceType="Premium";
    }
    else{
        serviceType="Regular";
    }

    cout << "Service Type: " << serviceType << endl;


    cout << "Total Minutes Used: " << minUsed << " minutes" << endl;

    cout << "Amount Due: $" << amount(serviceCode, time, minUsed) ;
}


float amount(char serviceCode, char time, float minUsed)
{
    float amountDue, remMins,above;

    if(serviceCode=='P' || serviceCode=='p'){
        if(time=='D' || time=='d'){
                if(minUsed>75){
                    remMins=minUsed-75;
                    above= (remMins)*0.10;
                    amountDue=25+above;
               }
               else{
                amountDue= 25;
               }
        }

        else if(time=='N' || time=='n'){
                if(minUsed>100){
                    remMins=minUsed-100;
                    above= (remMins)*0.05;
                    amountDue=25+above;
                }
                else{
                    amountDue= 25;
                }
        }
    }

    if(serviceCode=='R' || serviceCode=='r'){
        if(minUsed>50){
            remMins=minUsed-50;
            above= (remMins)*0.20;
            amountDue=10+above;
        }
        else{
            amountDue= 10;
        }
    }

    return amountDue;
}