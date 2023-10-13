#include <iostream>
using namespace std;

string checkTitle(int age, char gender);

main()
{
    int age;
    char gender;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender (m/f): ";
    cin >> gender;

    cout << "Your personal title is: " << checkTitle(age, gender);

}

string checkTitle(int age, char gender)
{
    string title;
    if(gender=='m')
    {
        if(age>=16){
            title = "Mr.";
        }
        else
        {
            title = "Master";
        }
    }
    if(gender=='f')
    {
        if(age>=16){
            title = "Ms.";
        }
        else
        {
            title = "Miss";
        }
    }

    return title;
}
