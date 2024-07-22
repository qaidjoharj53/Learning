#include <iostream>
using namespace std;
class demooverload
{
    string a;

public:
    demooverload(string a)
    {
        this->a = a;
    }
    demooverload operator+(demooverload &b)
    {
        a = a + b.a;
        return a;
    }
    void show()
    {
        cout << "\n\ncounter variables " << a << endl;
    }
};
int main()
{
    demooverload obj("Hello ");
    demooverload obj1("World");
    demooverload obj2 = obj + obj1;
    obj2.show();
    return 0;
}