#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName);
void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName);
main()
{
    string fileName;
    int size=10;
    int count=0;
    string names[size];
    int adNumbers[size];
    float percentages[size];
    getStudentDetails(names, adNumbers, percentages, size, count, fileName);
    saveToFile(names, adNumbers, percentages, count, fileName);

}

void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName)
{
    int counter=1;
    ifstream file;
    file.open("example.txt", ios::in);
    while(!file.eof())
    {
        string line;
        getline(file, line);
        if(counter==1)
        {
            names[count]=line;
        }
        else if(counter==2)
        {
            int a= stoi(line);
            adNumbers[count]=a;
        }
        else if(counter==3)
        {
            float a= stof(line);
            percentages[count]=a;
        }

        if(counter%3==0)
        {
            count++;
            counter=1;
        }

    }

    file.close();
}


void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName)
{
    ofstream file;
    file.open("toppers.txt", ios::out);
    for(int i=0; i<count; i++)
    {
        file << "Name: " << names[i];
        file << endl;
        file << "Admission Number: " << adNumbers[i];
        file << endl;
        file << "Percentage: " << percentages[i];
        file << endl;
        file << endl;
    }
    file.close();
}


