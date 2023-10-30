#include<iostream>
using namespace std;
class BC
{
    public:
    virtual void show(){
        cout<<"\n show() of base class"<< endl;
    }
};
class DC : public BC
{
    public:
    void show()
    {
        cout<<"\n show() of derived class";
        cout<<endl;
    }
};
int main(){

    BC *bptr;
    BC base;
    bptr=&base;
    cout<<"\n---- runtime polymorphism ----";
    cout<<"bptr points to base objects \n";
    bptr->show();
    DC derived;
    bptr =& derived;
    cout<<"bptr now points to derived objects\n";
    bptr->show();
    return 0;
}