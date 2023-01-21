#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"enter your grade in CAPITAL letters "<<endl;
	cin>>grade;
	switch(grade)
	{
	case 'A':
		cout<<"your marks are btw 80 to 90";
	   	break;
	case 'B':
		cout<<"your marks are btw 70 to 80";
		break;
	case 'C':
		cout<<"your marks are btw 60 to 70";
		break;
	case 'D':
		cout<<"your marks are btw 50 to 60";
		break;
	case 'E':
		cout<<"your marks are btw 40 to 50";
		break;
	case 'F':
		cout<<"your marks are below 40";
		break;
	default:
		cout<<"enter a valid grade"; 
	}
return 0;
}

