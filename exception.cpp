#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    try{
        if(b!=0){
            cout<<"answer"<<a/b<<endl;
        }
        else{
            throw(b);
        }
    }
    catch(int i){
        cout<<"exception caught: b ="<<b<<endl;
    }
}