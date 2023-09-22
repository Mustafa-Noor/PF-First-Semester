#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the size in megabytes (MB): ";
	float mbs;
	cin >> mbs;
	float bytes;
	bytes = mbs*1024;
	float bits;
	bits = bytes*1024*8;	
	cout << mbs <<" MB is equivalent to "<< bits <<" bits.";
}