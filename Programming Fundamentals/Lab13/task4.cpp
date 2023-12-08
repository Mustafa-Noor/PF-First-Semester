#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string name[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count);
void saveToFile(string name[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName);
main()
{
    int size=10;
    int count=1;
    string name[size];
    int ages[size];
    float matricMarks[size];
    float fscMarks[size];
    float ecatMarks[size];
    string fileName;

    getStudentDetails(name, ages, matricMarks, fscMarks, ecatMarks, size, count);
    saveToFile(name, ages, matricMarks, fscMarks, ecatMarks, count, fileName);

}

void getStudentDetails(string name[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
{
    for(int i=0; i<count; i++)
    {
        string option;
        cout << "Enter student's name: ";
        cin >> name[i];
        cout << "Enter student's age: ";
        cin >> ages[i];
        cout << "Enter student's Matric marks: ";
        cin >> matricMarks[i];
        cout << "Enter student's Fsc marks: ";
        cin >> fscMarks[i];
        cout << "Enter student's Ecat marks: ";
        cin >> ecatMarks[i];

        cout << "Enter No to Stop or Yes to Continue Enter: ";
        cin >> option;

        if(option=="Yes")
        {
            count++;
        }
        else
        {
            break;
        }

    }
}

void saveToFile(string name[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName)
{
    fstream file;
    file.open("example.txt", ios::out);
    for(int i=0; i<count; i++)
    {
        file << "Name: " << name[i];
        file << endl;
        file << "Age: " << ages[i];
        file << endl;
        file << "Matric Marks: " << matricMarks[i];
        file << endl;
        file << "Fsc Marks: " << fscMarks[i];
        file << endl;
        file << "Ecat Marks: " << ecatMarks[i];
        file << endl;
        file << endl;
    }

    file.close();

}