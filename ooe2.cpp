#include<iostream>
using namespace std;
class M
{
    protected:
    int m;
    public:
    M(int x)
    {
        m = x;
        cout<<"\n In M";
    }
};
class N{
    protected:
    int n;
    public:
    N(int y)
    {
        n=y;
        cout<<"\nIn N";
    }
    
};
class P:public M,N{
    int l;
    public:
    P(int p,int q,int r):M(r),N(q){
        l = p;
        cout<<"\n in P";
    }
    void display(){
        cout<<"\n"<<"m ="<<m<<""<<"n="<<n<<" "<<"l ="<<l;
    }
};
int main(){
    P obj1(3,2,1);
    obj1.display();
    return 0;
    }