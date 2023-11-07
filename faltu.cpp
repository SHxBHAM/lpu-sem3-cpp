#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v1(10);
    cout<<"size is: "<<v1.size()<<endl;
    for(int i = 0;i<=9;i++){
        v1[i] = i;
    }
    vector<int>::iterator i=v1.begin();
    i = i+3;
    v1.insert(i,100);
    
}