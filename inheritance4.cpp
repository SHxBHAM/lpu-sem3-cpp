#include<iostream>
using namespace std;
class B{
    protected:
    int x;
    public:
    void get_dataB()
    {
        cout<<"\n Enter value of x";
        cin<<x;
    }
};
class DB1:public virtual B{
    protected:
    int y;
    public:
    void get_dataDB1()
    {
        cout<<"\n Enter value of y:";
        cin>>y;
    }

}