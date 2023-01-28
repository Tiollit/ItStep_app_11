#include <iostream>
using namespace std;
class Test {
private:
    string text;
public:
    int age;
    //Constructor default    
 Test();
 Test(int age);
 Test(string text, int age);
    //Setter    
void set_text(string text);
    //Getter    
string get_text();
    //Destructor   
~Test();
};