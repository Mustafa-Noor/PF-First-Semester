#include<iostream>
#include <windows.h>
#include<cmath>
using namespace std;
string projectTimeCalculation(int neededhours, int days, int workers );
main()
{
        int neededhours, days, workers;
        cout << "Enter the needed hours: ";
        cin >> neededhours;
        cout << "Enter the days that the firm has: ";
        cin >> days;
        cout << "Enter the number of all workers: ";
        cin >> workers;

        string result;
        result =projectTimeCalculation(neededhours, days, workers);

}

string projectTimeCalculation(int neededhours, int days, int workers)
{
        float time1, time2, time3, finaltime, percentage, overtime;
        time1 = (days*24);
        percentage = (time1*10)/100;
        time2 = time1-percentage;
        time3 = fabs(time2);

        overtime = (workers*2);


        finaltime = (time3)-(overtime);


        int answer;


        if(finaltime<neededhours)
        {
            answer = neededhours-finaltime;
            cout << "Not enough time! "<< answer << " hours needed.";

            
            
        }

        if(finaltime>=neededhours){
            answer = finaltime;
            cout << "Yes!" << answer <<" hours left.";
        }






}