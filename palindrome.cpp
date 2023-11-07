#include<bits/stdc++.h>
using namespace std;
int main(){
    int count = 0;
    int a;
    int x;
    cin>>a;
    int tens = 1;
    while(a>=1){
        x = a%10;
        a = a/10;
        count++;
    }
    cout<<"count"<<count<<endl;
    while(count!=1){
        tens = tens*10;
        count--;
    }
}