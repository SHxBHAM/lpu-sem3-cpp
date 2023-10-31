#include<iostream>
using namespace std;
class operationsBase{
    public:
    virtual void addition() = 0;
    virtual void substraction() = 0;
    virtual void multiplication() = 0;
    virtual void division() = 0;
};
class operationsDerived:public operationsBase
{
    int a,b;
    public:
    int get();
    {
        cin>>a>>b;
    }
    

    void addition(){
        cout<<a+b<<" ";
    }
    void substraction(){
        cout<<a-b<<" ";
    }
    void division(){
        cout<<a/b<<" ";
    }
    void multiplication(){
        cout<<a*b<<" ";
    }


}