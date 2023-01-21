#include<iostream>
using namespace std;
//int weekDays(int m)
int main()
{
	int m;
	cout<<"enter a month number ";
	cin>>m;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		cout<<"days in the month are-31 ";
	}
	else if(m==2)
	{
		cout<<"days in the month are-28 (29 after 4 yrs)";
	}
	else if(m==4||m==6||m==9||m==11)
	{
		cout<<"days in the month are-30 ";
	}
	else
	{
		cout<<"enter a valid month ";
	}
	return 0;
}
