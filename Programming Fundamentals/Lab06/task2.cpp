#include <iostream>
using namespace std;

bool parityAnalysis(int num);

main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    cout << parityAnalysis(num);
}

bool parityAnalysis(int num)
{
    float result1, result2;
    int a, b, c, res1, res2, sum;
    string answer1,answer2;
    result1 = num%2;
    if (result1==0){
        answer1 = "even";
    }
    else{
        answer1 = "odd";
    }

    a = num%10;
    res1 = num/10;
    b = res1%10;
    res2 = res1/10;
    c = res2%10;

    sum =(a+b+c);
    result2 = sum%2;
    if (result2==0){
        answer2 = "even";
    }
    else{
        answer2 = "odd";
    }


    if(answer1==answer2){
        return true;
    }
    else{
        return false;
    }
}




