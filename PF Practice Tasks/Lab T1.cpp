#include<iostream>
using namespace std;
int product(int x,int y);
int main()
{
	int a,b,res,prod;
	cout<<"enter first number ";
	cin>>a;
	cout<<"enter second number ";
	cin>>b;
	res=product(a,b);
	cout<<"product is "<<res;
}
int product(int x,int y)
{
	int prod;
	prod=x*y;
	return(x*y);
}
