#include <iostream>
using namespace std;
class Student {
private:
    string phone, town;
public:
    int date;
    string PIB, country, study, groupe;
    Student();
    Test(int age);
    Test(string text, int age);
       
    void set_text(string text);
     
    string get_text();
     
    ~Test();
};
