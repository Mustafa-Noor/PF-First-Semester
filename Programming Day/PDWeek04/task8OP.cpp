#include <iostream>
using namespace std;
void printMenu();
void calculateAggregate(int matricMarks, int interMarks, int ecatMarks);
void compareMarks(string nameStd1,int ecatMarksStd1, string nameStd2, int ecatMarksStd2);

main (){
	system("cls");
	printMenu();
	
	string nameStd1;
	cout << "Enter first student's name: ";
	cin >> nameStd1;
	int matric1;
	cout << "Enter Marks in Matric: ";
	cin >> matric1;
	int inter1;
	cout << "Enter Marks in Inter: ";
	cin >> inter1;
	int ecat1;
	cout << "Enter Marks in ECAT: ";
	cin >> ecat1;
	calculateAggregate(matric1, inter1, ecat1);
	



	string nameStd2;
	cout << "Enter second student's name: ";
	cin >> nameStd2;
	int matric2;
	cout << "Enter Marks in Matric: ";
	cin >> matric2;
	int inter2;
	cout << "Enter Marks in Inter: ";
	cin >> inter2;
	int ecat2;
	cout << "Enter Marks in ECAT: ";
	cin >> ecat2;
	calculateAggregate(matric2, inter2, ecat2);


    compareMarks(nameStd1, ecat1, nameStd2, ecat2);
}

void compareMarks(string nameStd1,int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{

	if(ecatMarksStd1>ecatMarksStd2){
	cout << "Roll no of " << nameStd1 << " will be: 1";
	}
	
	if(ecatMarksStd1<ecatMarksStd2){
	cout << "Roll no of " << nameStd2 << " will be: 1";
	}

	
}
void printMenu(){
	cout << "###########################################################" << endl;
	cout << "#######   University Admission Management System    #######" << endl;
	cout << "###########################################################" << endl;

}
void calculateAggregate(int matricMarks, int interMarks, int ecatMarks)
{
	float aggregate;
	aggregate = (matricMarks*30/1100)+(interMarks*30/1100)+(ecatMarks*40/400);
	cout << "Aggregate will be: " << aggregate << endl << endl;
    
}