#include<iostream>
using namespace std;
struct product
{
	char name[20];
	int quantity;
	double price;
};
int main()
{
	product p[10];
	for(int i=1;i<=10;i++)
	{
		cout<<"Name of product " <<i<<" : ";
		cin.get(p[i].name,20);
		cout<<"Quantity of product " <<i<<" :";
		cin>>p[i].quantity;
		cout<<"Price of product "<<i<<" : ";
		cin>>p[i].price;
	}	
	cout<<endl;
	for(int j=1;j<=10;j++)
	{
		cout<<"Name of product  : "<<p[j].name<<endl;
		cout<<"Quantity of product  :"<<p[j].quantity<<endl;
		cout<<"Price of product  : "<<p[j].price;
	}
}
