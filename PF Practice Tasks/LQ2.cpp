#include<iostream>
using namespace std;
struct emp
{
	char name[25];
	int age;
	float salary;
};
void employe(emp e1)
{
	cout<<"\ndisplaying e1's info\n"<<endl;
	cout<<"name : "<<e1.name<<endl;
	cout<<"age : "<<e1.age<<endl;
	cout<<"salary : "<<e1.salary<<endl;
}
int main()
{
	emp e1;
	cout<<"enter name : ";
	cin.get(e1.name,25);
	cout<<"enter age : ";
	cin>>e1.age;
	cout<<"enter salary : ";
	cin>>e1.salary;
	employe(e1);
}
