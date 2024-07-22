#include<iostream>
using namespace std;
class A{
    public:
    void set(){

    }
} ;
class B: public virtual A{
    public:
    void set(){

    }
} ;
class C:public virtual A,public B{
    public:
    void set(){

    }
} ;
int main(){
    C lo;
    lo.set();
    lo.A::set();
    lo.B::set();
    return 0;
}