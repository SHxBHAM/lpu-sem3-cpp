#include<iostream>
using namespace std;
class sample{
    public:
    sample(){
        cout<<"Constructor called."<<endl;
    }
    ~sample(){
        cout<<"destructor called."<<endl;
    }
};
int main(){
    int n;
    cout<<"\n enter no. of objects:";
    cin>>n;
    sample* obj1 = new sample[n];
    delete[]obj1;
    return 0;
}