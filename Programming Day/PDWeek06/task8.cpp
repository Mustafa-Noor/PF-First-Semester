#include <iostream>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays,int hometownWeekends);

main()
{
    string yearType;
    int holidays, hometownWeekends;

    cout << "Enter year type: ";
    cin >> yearType;

    cout << "Enter number of holidays: ";
    cin >> holidays;

    cout << "Enter number of weekends: ";
    cin >> hometownWeekends;

    
    cout << calculateVolleyballGames(yearType, holidays, hometownWeekends);
    
}



int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int games;
    int totalGames;

    holidays = holidays*0.67;
    hometownWeekends = hometownWeekends*0.75;

    games = holidays+hometownWeekends;

    if (yearType == "leap")
    {
        totalGames = 48 - (48*0.15);

        totalGames = totalGames + games + 1;
    }

    else
    {
        totalGames = 48-(48*0.15);

        totalGames = totalGames + games;
        totalGames = totalGames- totalGames*0.15;


        if(totalGames >= 44){
            totalGames = totalGames + 2;}


        totalGames =totalGames + 1;  
         
    }
    
        
    return totalGames;
}