#include<iostream>
using namespace std;
class example{
    int a,b,add;
    public:
    void get(){
        cout << "Enter first value:";
        cin>> a;
        cout<< "enter second value:";
        cin>>b;
    }
    void sum();
}s;
inline void example::sum(){
    add = a+b;
    cout << "ADDITION OF TWO NUMBERS:"<<a+b;
}
int main(){
    cout << "Program using inline function\n";
    s.get();
    s.sum();
    return 0;
}
