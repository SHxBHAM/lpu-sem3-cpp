#include<iostream>
using namespace std;
class B1{
    public:
    void show_data()
    {
        cout<<"\n In the Base class 1";
    }
};
class B2
{
    public:
    void show_data(){
        cout<<"\n in the base class 2";
    }
}
class D:public B1,public B2