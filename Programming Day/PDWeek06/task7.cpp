#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
int main()
{
    int examHour, examMinute, studentHour, studentMinute;

    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;

    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;

    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;

    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;

    cout << checkStudentStatus(examHour, examMinute, studentHour, studentMinute);

}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{if((examHour>=0 && examHour<24) && (examMinute>=0 && examMinute<60) && (studentHour>=0 && studentHour<24) && (studentMinute>=0 && studentHour<60)){    
    float examTmin=(examHour*60)+examMinute;
    float studentTmin=(studentHour*60)+studentMinute;
    string status;
    int a, b;


    if(examTmin>=studentTmin){
    int difTime=examTmin-studentTmin;

        if(difTime>0 && difTime<=30){
        status="On time\n"+to_string(difTime)+" minutes before the start";

        }
        if(difTime==0){
            status="On time";
        }

        if(difTime>30 && difTime<60){

            status = "Early\n"+to_string(difTime)+" minutes before the start";

        }

        if(difTime>=60){
            a=difTime%60;
            b=difTime/60;
            status="Early\n"+to_string(b)+":"+to_string(a)+" hours before the start";
        }
    }

    if(examTmin<studentTmin){
        int difTime=studentTmin-examTmin;

        if(difTime>0 && difTime<60){
            status= "Late\n"+to_string(difTime)+" minutes after the start";
        }

        if(difTime>=60){
            a=difTime%60;
            b=difTime/60;
            status="Late\n"+to_string(b)+":"+to_string(a)+" hours after the start";
        }
        }

        return status;
      }
    }

