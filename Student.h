#include <iostream>
using namespace std;
class Student {
private:
    string Student;
public:
    int date;
    string PIB, phone, town, country, study, groupe;
    Student();
    Test(int age);
    Test(string text, int age);
       
    void set_text(string text);
     
    string get_text();
     
    ~Test();
};
