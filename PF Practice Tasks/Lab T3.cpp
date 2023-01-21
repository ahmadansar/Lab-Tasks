#include<iostream>
using namespace std;
int main()
{
	int arr2[5];
	int arr1[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		arr2[i]=arr1[i];	
	}
	for(int j=0;j<5;j++)
	{
		cout<<"value of arr2["<<j<<"] : "<<arr2[j]<<endl;
	}
}
