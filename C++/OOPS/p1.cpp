#include <iostream>
using namespace std;

class Person
{
    char name[20];
    int age;
    public:
    void getdata()  
    {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
    void putdata();
};

void Person::putdata()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

main()
{
    Person p1, p2;
    p1.getdata();
    p2.getdata();
    p1.putdata();
    p2.putdata();
}