#include <iostream>
using namespace std;

class DemoConst
{
private:
    int n1, n2, n3;

public:
    int i;
    DemoConst(void); // declaration of constructor
    void display()
    {
        cout << "\nNumber1 is = " << n1 << " Number2 is = " << n2 << " Number3 is = " << n3;
    }
};

DemoConst::DemoConst(void) // definition of constructor
{
    cout << "\nConstructor is called.";
    i = 4, n1 = 10, n2 = 20, n3 = 30;
}

int main()
{
    DemoConst i;
    i.display();
    return 0;
}
