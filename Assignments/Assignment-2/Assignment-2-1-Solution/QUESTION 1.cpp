#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string name, id, gender, province;
	gender = "Not assigned.";

	cout << "Enter Name of Student: ";
	cin >> name;
	cout << "Enter ID of Student: ";
	cin >> id;

	if(id[12]=='0' || id[12]=='2' || id[12]=='4' || id[12]=='6' || id[12]=='8')
		gender="Female";
	else
		gender="Male";
		
	switch(id[0])
	{
		case '1':
		{
			province="Khypber Pakhtunkhwa";
			break;
		}
		case '2':
		{
			province="FATA";
			break;
		}
		case '3':
		{
			province="Punjab";
			break;
		}
		case '4':
		{
			province="Sindh";
			break;
		}
		case '5':
		{
			province="Balochistan";
			break;
		}
		case '6':
		{
			province="Islamabad";
			break;
		}
		case '7':
		{
			province="Gilgit Baltistan";
			break;
		}
		default:
		{
			province="Not found - Wrong Input";
		}
	}

	cout << "\n\n\nGender of " << name << " is: " << gender;
	cout << "\nProvince of " << name << " is: " << province;
	cout << "\nDivision of " << name << " is: " << province << "-" << id[1];
	cout << "\nDistrict of " << name << " is: " << province << "-" << id[2];
	if(id[3]=='0')
		cout << "\nTehsil of " << name << " is: " << province << "-" << id[2];
	else
		cout << "\nTehsil of " << name << " is: " << province << "-" << id[3];
	cout << "\nUnion Council of " << name << " is: " << province << "-" << id[4];
	cout << "\nFamily Tree of " << name << " is: " << id[5] << id[6] << id[7] << id[8] << id[9] << id[10] << id[11];
	return 0;
}
