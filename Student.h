#include <iostream>
using namespace std;

class Student {
private:
    string phone, town;
public:     
    string PIB, country, study, groupe, date;

    void set_PIB(string PIB);
    string get_PIB();    
    void set_date(string date);    
    string get_date(); 
    void set_phone(string phone);
    string get_phone();
    void set_country(string country);
    string get_country();    
    void set_town(string town);
    string get_town();    
    void set_study(string study);
    string get_study(); 
    void set_groupe(string groupe);
    string get_groupe();     
  
};
