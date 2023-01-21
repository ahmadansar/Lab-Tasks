#include<iostream>
using namespace std;
int display(int n)
{
	int a;
	for(a=1;a<n;a++)
	{
		if(a%4==0)
		{
			cout<<a<<"\n";
		}
	}
}
int main()
{
	int x;
	cout<<"enter a number ";
	cin>>x;
	display(x);
	return 0; 
}
