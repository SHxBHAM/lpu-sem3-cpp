#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A(int a)
    {
        x = a;
        cout<<"\n calling base class parameterized"<<x;
    }
    ~A()
    {
        cout<<"\n Classing base class destructor";
    }
};

class B:public A
{
    int i;
    public:
    B(int p):A(p)
    {
        i = p;
        cout<<"\n calling derived class parameterized"<<i;
    }
    ~B()
    {
        cout<<"\n Classing derived class destructor";
    }
};
int main(){
    B obj2(1);
    return 0;
}