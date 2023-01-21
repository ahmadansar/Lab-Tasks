#include<iostream>
using namespace std;
int function(int x)
{
	x=10;
}
int main()
{
	int a;
	function(a);
	cout<<a;
	return 0;
}
