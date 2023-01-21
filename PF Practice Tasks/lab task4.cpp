#include<iostream>
using namespace std;
int function(int x,int y)
{
	int sum;
	sum=x+y;
	return sum;
}
int main()
{
	int x,y,res;
	cout<<"enter your number ";
	cin>>x;
	cout<<"enter your number ";
	cin>>y;
	res=function(x,y);
	cout<<"your sum is : "<<res;
	return 0;
}
