#include <iostream>
using namespace std;

class item
{
    static int count;
    int no;

public:
    void getcount(int i)
    {
        no = i;
        count++;
    }

    void showcount()
    {
        cout << count << "\n";
    }
};

int item::count;
main()
{
    item a, b, c;
    a.showcount();
    b.showcount();
    c.showcount();
    a.getcount(100);
    b.getcount(200);
    c.getcount(300);
    a.showcount();
    b.showcount();
    c.showcount();
}
