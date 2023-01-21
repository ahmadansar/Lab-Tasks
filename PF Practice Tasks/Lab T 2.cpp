#include<iostream>
using namespace std;
int main()
{
	int num[5];
	cout<<"INPUT"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"enter the value of num["<<i<<"] : ";
		cin>>num[i];
	}
	cout<<"OUTPUT"<<endl;
	for(int j=4;j>=0;j--)
	{
		cout<<"value of num["<<j<<"] : ";
		cout<<num[j]<<endl;
	}
}
