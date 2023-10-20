#include <iostream>
using namespace std;
void halfDiamond(int n);
int main()
{
    int n;
    cout << "Enter the desired number of rows: ";
    cin >> n;

    int half=n/2;

    halfDiamond(half);
}


void halfDiamond(int half)
{
    for(int i=1; i<=half ; i++)
    {
        for(int j=1 ; j<=half ; j++){
            if(j<=half-i){
                cout << " ";    
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }


    for(int i=half; i>=1 ; i--)
    {
        for(int j=1 ; j<=half ; j++){
            if(j<=half-i){
                cout << " ";    
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }

}