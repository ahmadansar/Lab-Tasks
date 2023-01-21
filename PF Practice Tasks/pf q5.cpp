#include<iostream>
using namespace std;
int main()
{
	int salary,scale;
	cout<<"enter salary: ";
	cin>>salary;
	cout<<"enter scale: ";
	cin>>scale;
	if(scale>0 && scale<14)
	{
		salary+=2300;
	}
	else if(scale>13 && scale<23)
	{
		salary+=6000;
	}
	while(scale<1 || scale>22)
	{
		cout<<"enter a valid scale again ";
		cin>>scale;
	}
	cout<<salary;
	return 0;
}
