#include<iostream>
using namespace std;
class BC
{
    public:
    void show(){
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
    cout<<"Early Binding";
    bptr->show();
    return 0;
}