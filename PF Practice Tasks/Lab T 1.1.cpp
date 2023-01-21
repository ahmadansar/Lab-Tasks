#include<iostream>
using namespace std;
int Product(int x,int y)
{	
	int product;
	product=x*y;
	//return(x*y);
}
int main()
{
	int a,b,result;
	cout<<"enter 1st number ";
	cin>>a;
	cout<<"enter 2nd number ";
	cin>>b;
	result=Product(a,b);
	cout<<"your product is "<<result;
	return 0;
}
