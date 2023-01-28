#include "Test.h"

Test::Test()
{
    cout << "Constructor!" << endl;
    text = "Default";
}
Test::Test(int age)
{
    cout << "Constructor with paramm[age]!" << endl;
    this->age = age;
}
Test::Test(string text, int age) : Test(age)
{
    cout << "Constructor with paramm[text, age]!" << endl;
    if (age < 18)
    {
        cout << "PG 18" << endl;
        set_text("private info");
    }
    else {
        set_text(text);
    }
}
void Test::set_text(string text)
{
    this->text = text;
}
string Test::get_text()
{
    if (text.size() != 0)
        return text;
    else {
        return "Empty string value!";
    }
}
Test::~Test()
{
    cout << "Destructor!" << endl;
    text.clear();
}