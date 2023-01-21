#include<iostream>
using namespace std;
int main()
{
	int a,sum,rem;
	cout<<"enter a 3 digit number"<<endl;
	cin>>a;
	for(sum=0;a>0;a/=10)
	{
		rem=a%10;
		sum+=rem;
	}
	cout<<"sum of digits is "<<sum;
	return 0;
}
