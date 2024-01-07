#include <iostream>
using namespace std;
int main()
{
	//Long long int to store decrypted value
	long long int num;
	
	//numbers for storing values after mod
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12;
	
	//Taking input
	cout << "Enter number to be decrypted" << endl;
	cin >> num;
	
	//Variables for storing values of inputs
	long long int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;

	//Mod 100 to store ascii value
	num1= num%100;
	x1=num/100;
	
	//Mod 10 to store digit
	num2=x1%10;
	x2=x1/10;
	
	//Mod 100 to store ascii value
	num3=x2%100;
	x3=x2/100;
	
	//Mod 10 to store digit
	num4=x3%10;
	x4=x3/10;
	
	//Mod 100 to store ascii value
	num5=x4%100;
	x5=x4/100;
	
	//Mod 10 to store digit
	num6=x5%10;
	x6=x5/10;
	
	//Mod 100 to store ascii value
	num7=x6%100;
	x7=x6/100;
	
	//Mod 10 to store digit
	num8=x7%10;
	x8=x7/10;
	
	//Mod 100 to store ascii value
	num9=x8%100;
	x9=x8/100;
	
	//Mod 10 to store digit
	num10=x9%10;
	x10=x9/10;
	
	//Mod 100 to store ascii value
	num11=x10;
	
	
	//coverting digits into characters
	char en1= char(num1); 
	char en2= char(num3); 
	char en3= char(num5); 
	char en4= char(num7); 
	char en5= char(num9); 
	char en6= char(num11);
	
	
			//Displaying Word
			cout << "Encrypted Word : " << en6 << en5 << en4 << en3 << en2 << en1 << "\n"; 
	
			//Displaying Roll no
			cout << "Roll No : " << num10 << num8 << num6 << num4 << num2 << "\n";

return 0;
}
 
