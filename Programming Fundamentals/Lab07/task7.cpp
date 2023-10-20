#include <iostream>
#include <iomanip>
using namespace std;

main() {
    int m;
    int number;
    int p1=0, p2=0, p3=0, p4=0, p5=0;

    cout << "Enter numbers count: ";
    cin >> m;

    for(int x = 0; x < m; x=x+1)
    {

        cout << "Enter a number: ";
        cin >> number;

        if(number <200) {
            p1=p1+1;
        } 
        
        else if(number <400) {
            p2=p2+1;
        }
        
         else if (number <600) {
            p3=p3+1;
        }
        
         else if (number <800) {
            p4=p4+1;
        } 
        
        else {
            p5=p5+1;
        }
    }



    cout << p1 << p2 << p3 << p4 << p5;


    float finalSum;
    finalSum = p1 + p2 + p3 + p4 + p5;


    float p1Percentage;
    p1Percentage = (p1/finalSum)*100;

    float p2Percentage;
    p2Percentage = (p2/finalSum)*100;

    float p3Percentage;
    p3Percentage = (p3/finalSum)*100;

    float p4Percentage;
    p4Percentage = (p4/finalSum)*100;

    float p5Percentage;
    p5Percentage = (p5/finalSum)*100;

    

    cout << fixed << setprecision(2) << p1Percentage << "%" << endl;
    cout << fixed << setprecision(2) << p2Percentage << "%" << endl;
    cout << fixed << setprecision(2) << p3Percentage << "%" << endl;
    cout << fixed << setprecision(2) << p4Percentage << "%" << endl;
    cout << fixed << setprecision(2) << p5Percentage << "%" << endl;
}
