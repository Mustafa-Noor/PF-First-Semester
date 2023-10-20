1#include <iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);

main()
{
    string name;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology;
    float average;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks for English: ";
    cin >> marksEnglish;

    cout << "Enter marks for Maths: ";
    cin >> marksMaths;

    cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;

    cout << "Enter marks for Social Science: ";
    cin >> marksSocialScience;

    cout << "Enter marks for Biology: ";
    cin >> marksBiology;


    cout << "Student Name: " << name << endl;


    average = calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology); 

    cout << "Percentage: " << average << "%" << endl;

    cout << "Grade: " << calculateGrade(average) << endl;

}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float average;
    average = ((marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology)/500) *100;
    return average;


}

string calculateGrade(float average){
    string grade;
    if(average>=90){
        grade = "A+";
    }
    if(average>=80 && average<90){
        grade ="A";
    }
    if(average>=70 && average<80){
        grade ="B+";
    }
    if(average>=60 && average<70){
        grade ="B";
    }
    if(average>=50 && average<60){
        grade ="C";
    }
    if(average>=40 && average<50){
        grade ="D";
    }
    if(average<40){
        grade ="F";
    }

    return grade;
}
