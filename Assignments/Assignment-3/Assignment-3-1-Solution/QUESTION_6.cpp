#include <iostream>
using namespace std;

int main()
{
int num, max;
cout << "Number of diamonds: ";
cin >> num;
cout << "Maximum number in a diamond (2-9): ";
cin >> max;
for(int i=1; i<=max; i++)
{
for (int x=1;  x<=num; x++)
{
for(int j=max-1; j>=i; j--)
{
cout << " ";
}
for(int k=i; k>=1; k--)
{
cout << k;
}
for(int k=1; k<=i; k++)
{
cout << k;
}
for(int j=max-1; j>=i; j--)
{
cout << " ";
}
}
cout << "\n";
}

for(int i=max-1; i>=1; i--)
{
for(int y=1; y<=num; y++)
{
for(int j=i; j<=max-1; j++)
{
cout << " ";
}
for(int k=i; k>=1; k--)
{
cout << k;
}
for(int k=1; k<=i; k++)
{
cout << k;
}
for(int j=i; j<=max-1; j++)
{
cout << " ";
}
}
cout << "\n";
}
}
