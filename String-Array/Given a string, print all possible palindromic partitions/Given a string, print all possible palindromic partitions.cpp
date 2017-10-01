# include <iostream>
#include "palword.h"

using namespace std;

int main()
{
    std::string str = "This is a string";
    Palword a = new Palword(str);
    str = "This is a new string";
    a.print();
    return 0;
}