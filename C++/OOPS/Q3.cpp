#include <iostream>
using namespace std;

// pure virtual function

class First
{
public:
    First()
    {
        cout << "It is First class constructor." << endl;
    }

    virtual void print() = 0;
};

class Second : public First
{
public:
    Second()
    {
        cout << "It is Second class constructor." << endl;
    }

    void print()
    {
        cout << "It is Second class print function which is pure virtual in First class" << endl;
    }
};

int main()
{
    Second obj;
    obj.print();
    return 0;
}