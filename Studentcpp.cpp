#include <sStudent.h>

string Student::set_PIB(string PIB)
{
    this->PIB = PIB;
}
string Student::get_PIB()
{
    if (PIB.size() != 0)
        return PIB;
    else {
        return "Empty string value!";
    }
}