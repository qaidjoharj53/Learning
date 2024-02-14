#include<iostream>
using namespace std;

class A1{
    public:
    static int v1, v2, v3, v4;
    static void read(int a, int b, int c, int d){
        v1 = a;
        v2 = b;
        v3 = c;
        v4 = d;
    }
    static void display(){
        cout << "v1: " << v1 << endl;
        cout << "v2: " << v2 << endl;
        cout << "v3: " << v3 << endl;
        cout << "v4: " << v4 << endl;
    }
    static void Process(int a, int b)
    {
        v1 = a;
        v2 = b;
        cout << v1 + v2;
        cout << v1 * v2;
    }
    static void Process(int c, int d)
    {
        v3 = c;
        v4 = d;
        cout << v3 * v4;
    }
};
class A2: public A1{
    public:
    void read(int a, int b, int c, int d){
        v1 = a;
        v2 = b;
        v3 = c;
        v4 = d;
    }
    void display(){
        cout << "v1: " << v1 << endl;
        cout << "v2: " << v2 << endl;
        cout << "v3: " << v3 << endl;
        cout << "v4: " << v4 << endl;
    }
    static void Process(int a, float b)
    {
        v1 = a;
        v2 = b;
        cout << v1 + v2;
    }
    static void Process(int c, double d)
    {
        v3 = c;
        v4 = d;
        cout << v3 * v4;
    }
};

int main()
{
    A1 obj1;
    A2 obj2;

    obj1.read(10, 20, 30, 40);
    obj2.read(90, 80, 60, 50);

    obj1.display();
    obj2.display();

    cout << "Sum of v1 and v2: ";
    obj1.Process(10, 20);
    cout << "Product of v3 and v4: ";
    obj1.Process(30, 40);

    cout << "Sum of v1 and v2: ";
    obj2.Process(10, 20.5);
    cout << "Product of v3 and v4: ";
    obj2.Process(30, 40.5);

    return 0;
}