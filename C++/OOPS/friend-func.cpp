#include <iostream>
using namespace std;

class userinfo 
{
    char name[20];
    int userID;
    float salary;
    public:
    void read()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter userID: ";
        cin >> userID;
        cout << "Enter salary: ";
        cin >> salary;
    }
    friend void display(userinfo);
};

void display(userinfo u)
{
    cout << "Details of User & Salaray" << u.userID << u.salary;
}

int main()
{
    userinfo obj;
    obj.read();
    display(obj);
    return 0;
}