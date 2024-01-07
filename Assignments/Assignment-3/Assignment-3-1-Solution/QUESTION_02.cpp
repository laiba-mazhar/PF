#include<iostream>
using namespace std;
int main(){
	int rows,words,m;
	cout<<"Enter the number of rows in the pattern"<<endl;
	cin>>rows;
	words=rows-8;
	m=rows/2;
	for(int j=0;j<=rows;j++)
	{
     if(j==1)
	{
	for(int k=0;k<=18;k++)
	{
    if(k<=1)
   {
	cout<<" ";
	}
	else if(k==2 or k==3 or k==4 or k==16 or k==17 or k==18){
	cout<<"-";}
	else{
    cout<<"*";
	}
			
	}
	cout<<endl;
	}
	else if(j>=m and j<=words )
	{
    for(int k=0;k<=15;k++)
	{	
	if(k<5)
	{
	cout<<" ";}
	else if(k==7 or k==13)
	{
	cout<<"|";}
	else
	{
	cout<<"*";}
	}
		cout<<endl;	}
		else if(j>=words+1 and j<=words+4)
		{	for(int k=0;k<=17;k++)
			{
				if(k<=2)
				{
					cout<<" ";
				}
				else if(k==3 or k==4 or k==7 or k==13 or k==16 or k==17 )
				{
					cout<<"|";
				}
				else
				{
				cout<<"*";
				}
			
		}
		cout<<endl;
		}
		else if(j==words+5){
			for(int k=0;k<5;k++)
		{
			cout<<" ";
		}
		for(int l=0;l<=10;l++){
			
				cout<<"-";

		}
		cout<<endl;
	}
	else if(j>=words+6 and j<=words	+9){
			for(int k=0;k<5;k++)
		{
			cout<<" ";
		}
		for(int l=0;l<=10;l++){
			
				cout<<"^";
		}
		cout<<endl;
	}
	else{
    for(int k=0;k<5;k++){
	cout<<" ";}
	for(int l=0;l<=10;l++){
	cout<<"*";	}
		cout<<endl;	}
	}
}