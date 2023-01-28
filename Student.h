#include <iostream>
using namespace std;
class Student {
private:
    string phone, town;
public:
    int date;
    string PIB, country, study, groupe;

    string Student::set_PIB(string PIB);   
    string Student::get_PIB();    
    string Student::set_date(string date);    
    string Student::get_date(); 
    string Student::set_phone(string phone);   
    string Student::get_phone();
    string Student::set_country(string country);    
    string Student::get_country();    
    string Student::set_town(string town); 
    string Student::get_town();    
    string Student::set_study(string study);    
    string Student::get_study(); 
    string Student::set_groupe(string groupe);   
    string Student::get_groupe();     
  
};
