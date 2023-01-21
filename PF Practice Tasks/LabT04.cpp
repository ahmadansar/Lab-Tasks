#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char new;
	string first_name="ansar";
	string last_name="ahmad";
	cout<<"length of first string is = ";
	cout<<first_name.length()<<endl;
	cout<<"length of second string is = ";
	cout<<last_name.length()<<endl;
	if (first_name == last_name)
    {
        cout << first_name << " is equal to " << last_name << endl;
    }
    else
    {
        cout << first_name << " is not equal to " << last_name << endl;
	}
 	char new=first_name+last_name;
}
