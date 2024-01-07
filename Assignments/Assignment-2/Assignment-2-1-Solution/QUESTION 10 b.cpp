#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char a;
	cout<<"Enter any character: "<<endl;
	cin>>a;
	if((a>=48 && a<=57) || (a>=65 && a<=90) || (a>=97 && a<=122) )
	cout<<"This is not a special character.";
	else
	cout<<"This is a special character.";
	return 0;
}