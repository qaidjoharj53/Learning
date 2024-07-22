#include <iostream>
using namespace std;
class sarea{
    int s;
    public:
    void read(const int &x)
    {
        // x++; , not allowed as const
        s=x;
    }
    int ar(){
        return s*s;
    }
};
int main(){
    sarea obj;
    obj.read(5);
    cout<<obj.ar()<<endl;
}