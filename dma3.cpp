#include<iostream>
using namespace std;
class example1{
    const char*ptr;
    public:
    example1()
    {
        ptr = new char[8];
        ptr = "dynamic";
    }

    void show(){
        cout<<ptr<<endl;
    }
};
int main(){
    example1 *ptr = new example1();
    ptr->show();
    return 0;
}