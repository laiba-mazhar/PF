#include <iostream>

using namespace std;

int main()
{
	cout << "Think of a quadrilateral from square, rectangle, kite, rhombus, trapezium and parallelogram and I will guess it....";
	cout << "\nLet's Start!\n\n";
	
	char choice;
	
	cout << "Are all sides equal?(Y/N) ";
	cin >> choice;
	
	if(choice=='Y' || choice=='y')
	{
		cout << "Are all anlges equal?(Y/N) ";
		cin >> choice;
		if(choice=='Y' || choice=='y')
		{
			cout << "I got it! It’s a SQUARE!";
		}
		else
		{
			cout << "I got it! It’s a RHOMBUS!";
		}
	}
	else
	{
		cout << "Are opposite sides equal?(Y/N) ";
		cin >> choice;
		if(choice=='Y' || choice=='y')
		{
			cout << "Are all angles equal?(Y/N) ";
			cin >> choice;
			if(choice=='Y' || choice=='y')
			{
				cout << "I got it! It's a RECTANGLE!";
			}
			else
			{
				cout << "I got it! It's a PARALELLOGRAM!";
			}
		}
		else
		{
			cout << "Are adjacent sides equal?(Y/N) ";
			cin >> choice;
			if(choice=='Y' || choice=='y')
			{
				cout << "I got it! It's a KITE!";
			}
			else
			{
				cout << "I got it! It's a TRAPEZIUM!";
			}
		}
	}
	
	return 0;
}
