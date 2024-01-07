#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a number" << endl;
	cin>>x;
	int a;
	a= ~(x-1);
	if(a==x){
		cout << "It is multiple of 2";
	}
	else{
		cout<< "It is not a multiple of 2";
	}
	return 0;
	}