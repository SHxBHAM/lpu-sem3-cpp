#include<iostream>
using namespace std;
class counter{
    int id;
    public:
    counter(int i){
        id = i;
        cout<<"bann gya"<<endl;
    }
    ~counter(){
        cout<<"fatt gya";
    }
    int main{
        counter();
    }
}