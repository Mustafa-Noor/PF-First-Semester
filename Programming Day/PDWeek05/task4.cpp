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
        cout << result;

}

string projectTimeCalculation(int neededhours, int days, int workers)
{
        float timetaken, percentage, finaltime;
        timetaken = days*workers*10;
        percentage= (timetaken*10)/100;
        fabs(percentage);
        finaltime = timetaken - percentage;
        int answer;


        if(finaltime<neededhours)
        {
            answer = neededhours-finaltime;
            return "Not enough time! " +to_string(answer)+ " hours needed.";

            
            
        }

        if(finaltime>=neededhours){
            answer = finaltime-neededhours;
            return "Yes!" +to_string(answer)+ " hours left.";
        }






}