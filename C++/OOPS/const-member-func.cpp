#include <iostream>
using namespace std;

class demoCM
{
    int v1, v2;

public:
    demoCM()
    {
        v1 = 0;
        v2 = 0;
    }

    void read(int a, int b)
    {
        v1 = a;
        v1 = b;
    }

    int showv1()
    {
        v1++;
        return v1;
    }

    int showv2() const
    {
        // v1++;
        return v2;
    }

    void show_both_value()
    {
        cout << "v1: " << v1 << endl;
        cout << "v2: " << v2 << endl;
    }
};

int main()
{
    demoCM obj;

    obj.read(10, 20);

    cout << obj.showv1() << endl;
    cout << obj.showv2() << endl;

    return 0;
}