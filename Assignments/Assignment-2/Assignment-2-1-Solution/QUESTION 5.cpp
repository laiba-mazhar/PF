#include<iostream>
#include<string.h>

using namespace std;

int main()
{
string password;
int passLen;
bool hasUpper=false, hasLower=false, hasDigit=false;

cout << "Enter your password: ";
cin >> password;

passLen = password.length();

if((password[0]>=65 && password[0]<=90) || (password[1]>=65 && password[1]<=90) || (password[2]>=65 && password[2]<=90) || (password[3]>=65 && password[3]<=90) || (password[4]>=65 && password[4]<=90) || (password[5]>=65 && password[5]<=90))
	hasUpper = true;

if((password[0]>=97 && password[0]<=122) || (password[1]>=97 && password[1]<=122) || (password[2]>=97 && password[2]<=122) || (password[3]>=97 && password[3]<=122) || (password[4]>=97 && password[4]<=122) || (password[5]>=97 && password[5]<=122))
	hasLower = true;

if((password[0]>=48 && password[0]<=57) || (password[1]>=48 && password[1]<=57) || (password[2]>=48 && password[2]<=57) || (password[3]>=48&& password[3]<=57) || (password[4]>=48 && password[4]<=57) || (password[5]>=48 && password[5]<=57))
	hasDigit=true;

if(passLen>=6 && hasUpper && hasLower && hasDigit)
cout << "Valid Password!";
else
cout << "Invalid Password!";

return 0;
}
