#include <iostream>
using namespace std;

class para_const {
    private:
    int v1, v2, v3;
    public:
    para_const(int n1, int n2, int n3)
    {
        v1 = n1;
        v2 = n2;
        v3 = n3;
        cout << "Demo for parameterized constructor" << endl;
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
    para_const pct(90, 80, 70);
    pct.display();
    return 0;
}