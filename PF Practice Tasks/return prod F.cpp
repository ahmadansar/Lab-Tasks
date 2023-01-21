#include<iostream>
using namespace std;
int funct(int x,int y)
{
	int s=x+y;
	return s;
}
int main()
{
	int a,b;
	cout<<"a is ";
	cin>>a;
	cout<<"b is ";
	cin>>b;
	cout<<funct(a,b);
	return 0;
}
