#include <iostream>
#include <string> 
#include "Student.h"
using namespace std;

void main ()
{
	int k, n;
	bool triger = true, inf = true, fni = true;
	Student *obj = new Student[5];
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Student # " << i + 1 << endl;
		string PIB;
		cout << "PIB->";
		getline(cin, PIB);
		obj[i].set_PIB(PIB);
		string date;
		cout << "date->";
		getline(cin, date);
		obj[i].set_date(date);
		string phone;
		cout << "phone->";
		getline(cin, phone);
		obj[i].set_phone(phone);
		string country;
		cout << "country->";
		getline(cin, country);
		obj[i].set_country(country);
		string town;
		cout << "town->";
		getline(cin, town);
		obj[i].set_town(town);
		string study;
		cout << "study->";
		getline(cin, study);
		obj[i].set_study(study);
		string groupe;
		cout << "groupe->";
		getline(cin, groupe);
		obj[i].set_groupe(groupe);
	}

	while (triger = true)
	{
		cout << "Welcome to class \"Student\"." << endl;
		cout << "To insert or change information about students press 1." << endl;
		cout << "To show public information about students press 2." << endl;
		cout << "TO end the work of a programm press 0" << endl;
		cin >> k;
		if (k == 1)
		{
			while (inf = true)
			{
				cout << "Insert number of a student and use numbers for navigation: " << endl;
				cout << "1 - First and Second name" << endl;
				cout << "2 - Date of birth" << endl;
				cout << "3 - phone number" << endl;
				cout << "4 - counry of living" << endl;
				cout << "5 - town of living" << endl;
				cout << "6 - place of studying" << endl;
				cout << "7 - groupe" << endl;
				cout << "0 - go to previous menu" << endl;
				cin.ignore();
				cin >> n >> k;
				cin.ignore();
				switch (k)
				{
				case 0:
					inf = false;
					break;
				case 1:
					cout << "Insert First and Second name of a student: " << endl;
					getline(cin, obj[n].PIB);
					break;
				case 2:
					cout << "Insert date of birth of a student: " << endl;
					getline(cin, obj[n].date);
					break;
				case 3:
					cout << "Insert phone number of a student: " << endl;
					cout << "Sorry, this information is unavailable for public use" << endl;
					break;
				case 4:
					cout << "Insert coutry  of living of a student: " << endl;
					getline(cin, obj[n].country);
					break;
				case 5:
					cout << "Insert town of living of a student: " << endl;
					cout << "Sorry, this information is unavailable for public use" << endl;
					break;
				case 6:
					cout << "Insert place of studying of a student: " << endl;
					getline(cin, obj[n].study);
					break;
				case 7:
					cout << "Insert groupe of a student: " << endl;
					getline(cin, obj[n].groupe);
					break;
				}
			}

		}
		else if (k == 2)
		{
			while (fni = true)
			{
				cout << "Choose the number of student you want to see or press 0 to return to main menu:" << endl;
				cin >> k;
				if (k == 0) fni = false;
				else
				{
					cout << obj[k].get_PIB() << " ";
					cout << obj[k].get_date() << " ";
					cout << obj[k].get_phone() << " ";
					cout << obj[k].get_country() << " ";
					cout << obj[k].get_town() << " ";
					cout << obj[k].get_study() << " ";
					cout << obj[k].get_groupe() << endl;
				}
			}
		}
		else break;
	}
}