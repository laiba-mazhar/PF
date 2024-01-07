#include<iostream>
using namespace std;
int main()
{
    char a;
	cout<<"Enter any character: "<<endl;
	cin>>a;
	((a>=97&&a<=122)?cout<<"This is a lower case letter":cout<<"This isn't a lower case letter");
	return 0;
}