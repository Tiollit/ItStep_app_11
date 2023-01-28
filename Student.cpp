#include <Student.h>

string Student::set_PIB(string PIB)
{
    this->PIB = PIB;
}
string Student::get_PIB()
{
    cout << "Insert First and Second name of a student: " << endl;
    getline(cin, PIB);
    if (PIB.size() != 0)
        return PIB;
    else 
    {
        return "Empty field";
    }
}

string Student::set_date(string date)
{
    this->date = date;
}
string Student::get_date()
{
    cout << "Insert date of birth of a student: " << endl;
    getline(cin, date);
    if (date.size() != 0)
        return date;
    else
    {
        return "Empty field";
    }
}

string Student::set_phone(string phone)
{
    this->phone = phone;
}
string Student::get_phone()
{
    cout << "Insert phone number of a student: " << endl;
    getline(cin, phone);
    if (phone.size() != 0)
        return phone;
    else
    {
        return "Empty field";
    }
}

string Student::set_country(string country)
{
    this->country = country;
}
string Student::get_country()
{
    cout << "Insert coutry  of living of a student: " << endl;
    getline(cin, country);
    if (country.size() != 0)
        return country;
    else
    {
        return "Empty field";
    }
}

string Student::set_town(string town)
{
    this->town = town;
}
string Student::get_town()
{
    cout << "Insert town of living of a student: " << endl;
    getline(cin, town);
    if (town.size() != 0)
        return town;
    else
    {
        return "Empty field";
    }
}

string Student::set_study(string study)
{
    this->study = study;
}
string Student::get_study()
{
    cout << "Insert place of studying of a student: " << endl;
    getline(cin, study);
    if (study.size() != 0)
        return study;
    else
    {
        return "Empty field";
    }
}

string Student::set_groupe(string groupe)
{
    this->groupe = groupe;
}
string Student::get_groupe()
{
    cout << "Insert groupe of a student: " << endl;
    getline(groupe);
    if (groupe.size() != 0)
        return groupe;
    else
    {
        return "Empty field";
    }
}