#include<iostream>
using namespace std;
int compare(int *a,int *b)
{	int x=0;
	for(int i=0;i<3;i++)
	{	
	if(*a==*b)
		{
			*a++;
			*b++;
			x++;
		}
	}
		if(x==3)
		{
			
			cout<<"0";
		}
		else
		{
			cout<<"-1";
		}

}
int main()
{
	int arr1[3]={4,2,3};
	int arr2[3]={4,4,3};
	compare(arr1,arr2);
}

