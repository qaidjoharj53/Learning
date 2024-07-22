#include <iostream>
using namespace std;

// Hybrid Inheritance

class A
{
public:
    A()
    {
        cout << "It is an animal." << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "It is a mammal." << endl;
    }
};

class C : public A
{
public:
    C()
    {
        cout << "It is a herbivore." << endl;
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "It is a cow." << endl;
    }
};

int main()
{
    D obj;
    return 0;
}