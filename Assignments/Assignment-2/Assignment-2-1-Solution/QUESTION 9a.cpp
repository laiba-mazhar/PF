#include<iostream>
using namespace std;
int main()
{
	int a,b,c,largest;
    cout<<"Enter the First value:"<<endl;
    cin>>a;
    cout<<"Enter the Second value"<<endl;
    cin>>b;
    cout<<"Enter the Third value"<<endl;
    cin>>c;
    largest=((a>b&&a>c)?a:(b>a&&b>c)?b:c);
   cout<<"The largest number is: "<<largest<<endl;
	return 0;
}