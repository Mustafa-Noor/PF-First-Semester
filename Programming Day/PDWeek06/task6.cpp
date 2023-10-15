#include <iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);

int main()
{
    string month;
    int numberOfStays;
    string result;


    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;

    result= calculateHotelPrices(month, numberOfStays);
    cout << result;

    return 0;
}

string calculateHotelPrices(string month, int numberOfStays)
{
    float studioprice, apartmentprice;
    string result;


    if(month=="May" || month=="October"){

        apartmentprice = 65;
        studioprice = 50;

        if(numberOfStays>7 && numberOfStays<=14){
            studioprice=studioprice-(studioprice*0.05);       
        }
        if(numberOfStays>14){
            studioprice= studioprice-(studioprice*0.3);
            apartmentprice= apartmentprice-(apartmentprice*0.1);
        }
    
    }



    if(month=="June" || month=="September")
    {
        apartmentprice = 68.70;
        studioprice = 75.20;

        if(numberOfStays>14){

            studioprice= studioprice-(studioprice*0.2);
            apartmentprice= apartmentprice-(apartmentprice*0.1);
        
        }

    }

    if(month=="July" || month=="August")
    {
        studioprice= 76;
        apartmentprice=77;
        if(numberOfStays>14){
            apartmentprice= apartmentprice-(apartmentprice*0.1);
        }
    }


    studioprice=studioprice*numberOfStays;
    apartmentprice=apartmentprice*numberOfStays;
    

     return "Apartment: " +to_string(apartmentprice)+ "$.\nStudio: " +to_string(studioprice)+ "$.";
}