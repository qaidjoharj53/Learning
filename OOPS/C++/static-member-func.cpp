#include <iostream>
using namespace std;

class Box
{
    public:
    static int length;
    static int breadth;
    static int height;

    static void print()
    {
        cout << "Length: " << length << "\n";
        cout << "Breadth: " << breadth << "\n";
        cout << "Height: " << height << "\n";
    }
};

int Box::length = 10;
int Box::breadth = 20;
int Box::height = 30;

int main()
{
    Box b;
    cout << "Static member function is called through object name\n";
    b.print();
    cout << "Static member function is called through class name\n";
    Box::print();
    return 0;
}