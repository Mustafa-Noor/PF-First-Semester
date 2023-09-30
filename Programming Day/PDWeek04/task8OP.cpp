#include <iostream>
void printMenu();
void calculateAggregate(int matricMarks, int interMarks, int ecatMarks);
void compareMarks(int ecatMarksStd1, int ecatMarksStd2);
using namespace std;
main (){
	system("cls");
	printMenu();
	
	string n1;
	cout << "Enter first student's name: ";
	cin >> n1;
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
	



	string n2;
	cout << "Enter first student's name: ";
	cin >> n2;
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



	if(ecat1>ecat2){
	cout << "Roll no of " << n1 << " will be: 1";
	}
	
	if(ecat1<ecat2){
	cout << "Roll no of " << n2 << " will be: 1";
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
	cout << "Aggregate will be: " << aggregate << endl;
}