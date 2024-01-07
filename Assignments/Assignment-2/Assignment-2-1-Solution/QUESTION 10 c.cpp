#include<iostream>
using namespace std;
int main()
{
	int leapYear;
    cout<< "Enter a Year: ";
    cin>>leapYear;
    (leapYear%4==0 || leapYear%100==0 || leapYear%400==0)?cout<<"This is a leap Year":cout<<"This is not a leap year";
	return 0;
}
