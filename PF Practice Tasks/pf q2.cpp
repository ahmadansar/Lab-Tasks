#include<iostream>
using namespace std;
int main()
{
	int a,n,c=0;
	cout<<"enter a positive number ";
	cin>>n;
	for(a=1;a<=n;a++)
	{
		if(n%a==0)
		{
			c++;
		}
	}
		if(c==2)
		{
			cout<<"your number is prime";
		}
		else
		{
			cout<<"your num is not prime";
		}
	return 0;
}
