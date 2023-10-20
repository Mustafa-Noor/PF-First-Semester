#include <iostream>
#include <iomanip>
using namespace std;
void transportation(int count);
main()
{
    int count;

    cout << "Enter the count of cargo for transportation: ";
    cin >> count;

    transportation(count);

}

void transportation(int count)
{
    float tonnage;
    float mini=0;
    float truck=0;
    float train=0;
    float sum=0;
    float averageprice;

    float perMini, perTruck, perTrain;


    for(int x=1; x<=count ; x++)
    {
        cout << "Enter the tonnage of cargo " << x << ": ";
        cin >> tonnage;


        if(tonnage<=3){

            mini=mini+tonnage;

        }

        if(tonnage>3 && tonnage<=11){

            truck=truck+tonnage;
        }

        if(tonnage>11){

            train=train+tonnage;
        }

    }

    sum=mini+truck+train;

    perMini=(mini/sum)*100;
    perTruck=(truck/sum)*100;
    perTrain=(train/sum)*100;


    averageprice=(mini*200 + truck*175 + train*120)/sum;

    cout << fixed;
    cout << setprecision(2);

    cout << averageprice << endl;
    cout << perMini <<"%" << endl;
    cout << perTruck <<"%" << endl;
    cout << perTrain <<"%" ;




}