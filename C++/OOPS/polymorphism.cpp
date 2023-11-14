#include <iostream>
using namespace std;

class displaydata{
    public:
    void show(int v1)
    {
        cout<<"i           ntegervar.value:"<<v1<<endl;
    }
    void show(double v2)
    {
        cout<<"floatingvar.value:"<<v2<<endl;
    }
    void show(char* v3)
    {
        cout << "charactervar.value:" << v3 << endl;
    }
};

int main(void)
{
    displaydata obj1;
    obj1.show(100);
    obj1.show(991.75);
    obj1.show("Function overloading");
    return 0;
}