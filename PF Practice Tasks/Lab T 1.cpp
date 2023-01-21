#include<iostream>
using namespace std;
int main()
{
	int numArray[5];
	cout<<"INPUT\n";
	for(int i=0;i<5;i++)
	{
		cout<<"enter your array entries["<<i<<"] : ";
		cin>>numArray[i];
	}
	cout<<"OUTPUT"<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<"your array values are numArray["<<j<<"] : ";
		cout<<numArray[j]<<endl;
	}
}
