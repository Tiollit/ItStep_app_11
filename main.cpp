#include <iostream>
#include <Student.h>
using namespace std;

void main ()
{
	int k;
	bool triger = true, inf = true;
	Student *obj = new Student[5];

	while (triger = true)
	{
		cout << "Welcome to class \"Student\". To insert or change information about students press 1." << endl;
		cout << "To show public information about students press 2." << endl;
		cout << "TO end the work of a programm press 0" << endl;
		cin >> k;
		if (k == 1)
		{
			while (inf = true)
			{
				cout << "Use numbers for navigation: " << endl;
				cout << "1 - First and Second name" << endl;
				cout << "2 - Date of birth" << endl;
				cout << "3 - phone number" << endl;
				cout << "4 - counry of living" << endl;
				cout << "5 - town of living" << endl;
				cout << "6 - place of studying" << endl;
				cout << "7 - groupe" << endl;
				cout << "0 - go to previous menu" << endl;
				cin >> k;
				switch (k)
				{
				case 0:
					inf = false;
					break;
				case 1:
					Student.get_PIB();
					break;
				case 2:
					Student.get_date();
					break;
				case 3:
					Student.get_phone();
					break;
				case 4:
					Student.get_country();
					break;
				case 5:
					Student.get_town();
					break;
				case 6:
					Student.get_study();
					break;
				case 7:
					Student.get_groupe();
					break;
				}
			}
			
		}
			
	}
		

		
	return 0;
}