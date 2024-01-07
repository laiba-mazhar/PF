#include<iostream>
#include<string>
using namespace std;
int main()
{int encrypt;
string w;
cout<<"Enter any Sentence or a word: ";
cin>>w;
int len=w.length();
if(len>=1)
{
encrypt=w[0];
cout<<encrypt<<"1";
}

if(len>=2)
{
encrypt=w[1];
cout<<encrypt<<"7";
}
if(len>=3)
{
encrypt=w[2];
cout<<encrypt<<"6";
}
if(len>=4)
{
encrypt=w[3];
cout<<encrypt<<"5";
}
if(len>=5)
{
encrypt=w[4];
cout<<encrypt<< "1";
}
if(len>=6)
{
encrypt=w[5];
cout<<encrypt;
}

return 0;
}