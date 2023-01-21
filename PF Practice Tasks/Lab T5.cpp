#include<iostream>
using namespace std;
int main()
{
	int arr2[7],arr1[7];
	for(int i=0;i<7;i++)
	{
		cout<<"enter your value of arr1["<<i<<"] : ";
		cin>>arr1[i];
	}
	for(int j=0;j<7;j++)
	{
		arr2[j]=arr1[j]*arr1[j];
	}
	for(int k=0;k<7;k++)
	{
		cout<<"value of arr2["<<k<<"] : "<<arr2[k]<<endl;
	}
}
