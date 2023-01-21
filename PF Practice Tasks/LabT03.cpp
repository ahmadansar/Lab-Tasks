#include<iostream>
using namespace std;
int main()
{
	//all marks are out of 10.
	float score[4];
	float total=0,adjT=0,avg=0;
	for(int i=0;i<4;i++)
	{
		int a=0;
		cout<<"test score "<<++a<<" : ";
		cin>>score[i];
		total+=score[i];
	}
	cout<<"your total score is : "<<total<<endl;
	if(score[0]<score[1] && score[0]<score[2] && score[0]<score[3])
	{
		cout<<score[0]<<" is the lowest one\n";
		adjT=total-score[0];
		cout<<"your adjusted score is : "<<adjT<<endl;
	}
	else if(score[1]<score[0] && score[1]<score[2] && score[1]<score[3])
	{
		cout<<score[1]<<" is lowest one\n";
		adjT=total-score[1];
		cout<<"your adjusted score is : "<<adjT<<endl;
	}
	else if(score[2]<score[0] && score[2]<score[1] && score[2]<score[3])
	{
		cout<<score[2]<<" is lowest one\n";
		adjT=total-score[2];
		cout<<"your adjusted score is : "<<adjT<<endl;
	}
	else if(score[3]<score[0] && score[3]<score[1] && score[3]<score[2])
	{
		cout<<score[3]<<" is lowest one\n";
		adjT=total-score[3];
		cout<<"your adjusted score is : "<<adjT<<endl;
	}
	else
	{
		cout<<"all are equal\n";
	}
	avg=adjT/3;
	cout<<"your average is : "<<avg<<endl;
}
