#include <iostream>
using namespace std;

class copy_const {
    private:
    int v1, v2, v3;
    public:
    copy_const(int n1, int n2, int n3)
    {
        v1 = n1;
        v2 = n2;
        v3 = n3;
        cout << "Demo for parameterized constructor" << endl;
    }

    copy_const(copy_const &obj)
    {
        v1 = obj.v1;
        v2 = obj.v2;
        v3 = obj.v3;
    }

    void display()
    {
        cout << "Value of v1 is = " << v1 << endl;
        cout << "Value of v2 is = " << v2 << endl;
        cout << "Value of v3 is = " << v3 << endl;
    }
};

main()
{
    copy_const c1(100, 200, 300);
    copy_const c2(c1);
    cout << "Here parameterized constructor is called" << endl;
    c1.display();
    cout << "Here copy constructor is called" << endl;
    c2.display();
    return 0;
}