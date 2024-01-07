#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,largest;
    cout<<"Enter the First value:"<<endl;
    cin>>a;
    cout<<"Enter the Second value"<<endl;
    cin>>b;
    cout<<"Enter the Third value"<<endl;
    cin>>c;
    cout<<"Enter the Fouth value"<<endl;
    cin>>d;
    largest=((a>b&&a>c&&a>d)?a:(b>a&&b>c&&b>d)?b:(c>a&&c>b&&c>d)?c:d);
   //largest = a>b?a>c?a>d?a:b>c?b>d?b:c>d?c:d;
   cout<<"The largest number is: "<<largest<<endl;
	
	
	
	return 0;
}