#include <iostream>
using namespace std;
int main()
{
	char str[20],c;
	int i,a=0;
	cout<<"enter your name : ";
	cin>>str;
	cout<<"enter character u want as output : ";
	cin>>c;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
			a++;
		}
	}
	cout<<"total elements are : "<<a;
}
