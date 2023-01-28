#include "Student.h"

void Student::set_PIB(string PIB)
{
    this->PIB = PIB;
}
string Student::get_PIB()
{    
    if (PIB.size() != 0)
        return PIB;
    else 
    {
        return "Empty field";
    }
}

void Student::set_date(string date)
{
    this->date = date;
}
string Student::get_date()
{   
    if (date.size() != 0)
        return date;
    else
    {
        return "Empty field";
    }
}

void Student::set_phone(string phone)
{
    this->phone = phone;
}
string Student::get_phone()
{   
    if (phone.size() != 0)
        return phone;
    else
    {
        return "Empty field";
    }
}

void Student::set_country(string country)
{
    this->country = country;
}
string Student::get_country()
{    
    if (country.size() != 0)
        return country;
    else
    {
        return "Empty field";
    }
}

void Student::set_town(string town)
{
    this->town = town;
}
string Student::get_town()
{   
    if (town.size() != 0)
        return town;
    else
    {
        return "Empty field";
    }
}

void Student::set_study(string study)
{
    this->study = study;
}
string Student::get_study()
{    
    if (study.size() != 0)
        return study;
    else
    {
        return "Empty field";
    }
}

void Student::set_groupe(string groupe)
{
    this->groupe = groupe;
}
string Student::get_groupe()
{   
    if (groupe.size() != 0)
        return groupe;
    else
    {
        return "Empty field";
    }
}