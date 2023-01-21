#include<iostream>
using namespace std;
struct user
{
	char name[20];
	int age;
	float cgpa;
};
int main()
{
	user n1;
	n1.name[20]='name';
	n1.age=20;
	n1.cgpa=3.9;
	cout<<"output\n";
	cout<<n1.name[20]<<endl;
	cout<<n1.age<<endl;
	cout<<n1.cgpa;
}
