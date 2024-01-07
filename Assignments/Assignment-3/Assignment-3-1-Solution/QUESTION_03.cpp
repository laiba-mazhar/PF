#include <iostream>
using namespace std;

int main()
{
string name, contact;
int order1, order2, order3, order4, order5, order6;
int qOrder1, qOrder2, qOrder3, qOrder4, qOrder5, qOrder6;

cout << "Menu of our restaurant: \n\n";
cout << " 1 - Grilled Chicken Burger \tRs. 400/-\t11 - Chicken Tikka Pizza\tRs. 700/-\n";
cout << " 2 - Beef Burger \t\tRs. 500/-\t12 - Chicken Fajita Pizza\tRs. 700/-\n";
cout << " 3 - Fried Chicken Burger \tRs. 325/-\t13 - Malai Boti Pizza\t\tRs. 700/-\n";
cout << " 4 - Fried Chicken \t\tRs. 200/-\t14 - Pizza Margarita\t\tRs. 650/-\n";
cout << " 5 - Birria Tacos \t\tRs. 350/-\t15 - Chicken Karahi\t\tRs. 600/-\n";
cout << " 6 - Grilled Chicken Wrap \tRs. 450/-\t16 - Chicken Handi\t\tRs. 600/-\n";
cout << " 7 - Fried Chicken Wrap \tRs. 350/-\t17 - Chicken Biriyani\t\tRs. 350/-\n";
cout << " 8 - Beef Quesadilla \t\tRs. 550/-\t18 - Mutton Chops\t\tRs. 800/-\n";
cout << " 9 - Chicken Burrito \t\tRs. 575/-\t19 - Loaded Fries\t\tRs. 450/-\n";
cout << "10- Beef Lime Burrito \t\tRs. 625/-\t20 - Fries\t\t\tRs. 280/-\n";

cout << "\n\nPlease enter your name: ";
cin >> name;
cout << "Please enter your Phone number: ";
cin >> contact;

cout << "\nWhich menu item do you want to order? (1-20): ";
cin >> order1;
cout << "Quantity of " << order1 << "? ";
cin >> qOrder1;

int numOfOrders = 1;
bool more = true;
char choice;

while(more)
{
cout << "\nDo you want to order more menu items? (Y/N): ";
cin >> choice;
if(choice=='Y' || choice=='y')
{
numOfOrders++;
switch(numOfOrders)
{
case 2:
{
cout << "Which menu item do you want to order? (1-20): ";
cin >> order2;
cout << "Quantity? ";
cin >> qOrder2;
break;
}
case 3:
{
cout << "Which menu item do you want to order? (1-20): ";
cin >> order3;
cout << "Quantity? ";
cin >> qOrder3;
break;
}
case 4:
{
cout << "Which menu item do you want to order? (1-20): ";
cin >> order4;
cout << "Quantity? ";
cin >> qOrder4;
break;
}
case 5:
{
cout << "Which menu item do you want to order? (1-20): ";
cin >> order5;
cout << "Quantity? ";
cin >> qOrder5;
break;
}
case 6:
{
cout << "Which menu item do you want to order? (1-20): ";
cin >> order6;
cout << "Quantity? ";
cin >> qOrder6;
break;
}
}
}
else
more = false;
}


return 0;
}
