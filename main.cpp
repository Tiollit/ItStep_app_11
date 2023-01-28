#include <iostream>
#include "Test.h"
using namespace std;

int main()
{
    Test* obj = new Test("Test 1", 16);
    //obj->set_text("Hello!");   
    cout << obj->get_text() << endl;
    delete obj;
    return 0;
}