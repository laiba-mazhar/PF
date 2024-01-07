#include <iostream>

using namespace std;

int main()
{
	int a, b,c,avg;
	avg=0;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	if(a==b){
	avg= (a|b);
	}
	else{
	c= (a|b);
	avg= c>>1;

	}
	cout << avg;
	return 0;
}
