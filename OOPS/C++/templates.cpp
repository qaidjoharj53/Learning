#include <iostream>
using namespace std;

template <class T>
class DSM
{
private:
    T a, b;

public:
    static int v1;
    void read(T x, T y)
    {
        a = x;
        b = y;
        v1 = v1 + 1;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};
template <class T>
int DSM<T>::v1 = 0;
int main()
{
    DSM<int> do1, do2;
    do1.read(10, 20);
    do1.show();
    cout << do1.v1 << endl;
    do2.read(100, 200);
    do2.show();
    cout << do2.v1 << endl;
    cout << DSM<int>::v1 << endl;
    return 0;
}