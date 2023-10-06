#include <iostream>
using namespace std;
string evenorodd(int resf);
main()
{
	int number;
	string result;
	cout << "Enter a five-digit number: ";
	cin >> number;
	int a, b, c, d, e;
	int sum;
	int res1,res2,res3,res4,resf,resf1;
	a = number%10;
	res1 = number/10;
	b = res1%10;
	res2 = res1/10;
	c = res2%10;
	res3 = res2/10;
	d = res3%10;
	res4 = res3/10;
	e = res4%10;
	resf = a+b+c+d+e;
	result = evenorodd(resf);
	cout << result;
}
string evenorodd(int resf)
{
	string answer;
	if(resf%2==0){
	answer = "Evenish";
	}

	if(resf%2!=0){
	answer = "Oddish";
	}
	return answer;
}

	
	
	
	

