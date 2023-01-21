#include<iostream>
using namespace std;
int main()
{
	int val1=2300,val2;
	int *myPointer;
	myPointer=&val1;
	cout<<*myPointer<<endl;
	val2=*myPointer;
	cout<<val2<<endl;
	cout<<&val1<<endl;
	cout<<myPointer;
}
