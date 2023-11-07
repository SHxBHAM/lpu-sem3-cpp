#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1(10);
    cout<<"size is"<<v1.size()<<endl;
    for(int i=0;i<9;i++){
        v1[i]=i;
    }
    for(int i = 10;i<=19;i++){
        v1.push_back(i);
    }
    cout<<"size is "<<v1.size()<<endl;
    for(int i = 0;i<=19;i++){
        cout<<v1[i]<<" ";
    }
    v1.pop_back();
    v1.push_back();
    cout<<"new size of vector is: "<<v1.size()<<endl;
    vector<>


}