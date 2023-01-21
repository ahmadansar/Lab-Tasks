#include<iostream>
using namespace std;
//int firstFunction()
void firstFunction(int n)
{	
	int a;
	for(a=1;a<n;a++)
	{
		if(a%4==0)
		{
			cout<<"number is divisible by 4 ";
		}
		else
		{
			cout<<"number is not divisible by 4 ";
		}
	}
}
int main()
{
	int n;
	cout<<"enter a number ";
	cin>>n;
	firstFunction(n);
	return 0;
}

