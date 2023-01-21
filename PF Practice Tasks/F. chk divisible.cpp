#include<iostream>
using namespace std;
int function(int x)
{
	if(x%4==0)
	{
		cout<<x <<" is divisible by 4 ";
	}
	else 
	{
		cout<<x <<"  is not divisible by 4  ";
	}
}
int main()
{
	int a;
	cout<<"enter a number ";
	cin>>a;
	function(a);
	return 0;
}
