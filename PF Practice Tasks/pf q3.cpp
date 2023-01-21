#include<iostream>
using namespace std;
int main()
{
	int a,sum=0;
	cout<<"enter a poitive number ";
	cin>>a;
	while(a>0)
	{
		sum+=a;
		cout<<"enter a positive number ";
		cin>>a;
	}
	cout<<"your sum is "<<sum;
	return 0;
}
