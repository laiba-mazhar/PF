#include<iostream>
using namespace std;
int main()
{
	int num,check;
	cout<<"Enter a number"<<endl;
	cin>>num;
    check=(!(num & 1));
	if(check==0)
	cout<<"The number is odd";
	else
	cout<<"The number is even";
	return 0;
}
