#include<iostream>
using namespace std;
int main()
{
	char a;
	float s1,s2,s3,sum,avg;
	do
	{
		cout<<"enter first score ";
		cin>>s1;
		cout<<"enter second score ";
		cin>>s2;
		cout<<"enter third score ";
		cin>>s3;
		sum=s1+s2+s3;
		avg=sum/3;
		cout<<"your average is "<<avg<<endl;
		cout<<"if u want to continue, press y "<<endl;
		cin>>a;
	}
	while(a=='y');
	return 0;
 } 
