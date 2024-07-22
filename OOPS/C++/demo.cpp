#include <iostream>
using namespace std;

class demo1
{
    public:
    void display()
    {
        cout << "Here the first inheritance demo class of the program.\n";
    }
};

class demo2 : public demo1
{
    public:
    void show()
    {
        cout << "Here derived class from demo1.\n";
    }
};

class demo3 : public demo2
{};

int main()
{
    demo1 obj;
    obj.display();
    demo3 obj1;
    obj1.display();
    demo2 obj2;
    obj2.show();

    return 0;
}