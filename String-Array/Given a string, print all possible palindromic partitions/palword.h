#include <iostream>
#include <string>

using namespace std;

class Palword
{
public:
    Palword(string& _buff);
    ~Palword();
    void print();
private:
    string buff;
};

Palword::Palword(string& _buff)
{
    buff = _buff;
    cout << endl << buff << endl;
}

void Palword::print()
{
    cout << endl << buff << endl;
}