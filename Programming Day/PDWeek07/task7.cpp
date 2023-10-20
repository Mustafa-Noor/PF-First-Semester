#include <iostream>
using namespace std;
void hospital(int number);

main()
{
    int number;

    cout << "Enter Number of days you visited Hospital: ";
    cin >> number;

    hospital(number);

}

void hospital(int number)
{
    int patients;
    int limit=7;
    int untreated=0;
    int treated=0;
    

    for(int x=1 ; x<=number ; x++)
    {
        cout << "Number of patients who visited hospital on Day " << x <<": ";
        cin >> patients;



        if(x%3==0 && treated<untreated){
                limit++;
            }

        if(patients>limit){
            untreated += patients-limit;
            treated += limit;

        }

        else{
            treated += patients;
        }


    }



    cout << "Treated Patients: "<< treated << endl;
    cout << "Untreated Patients: "<< untreated;


}