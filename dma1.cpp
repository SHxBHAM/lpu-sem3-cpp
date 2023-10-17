#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *p=NULL;
    p = new int;
    if(p == NULL){
        cout<<"\n Memory allocation failure";
        exit(1);
    }
    else{
        cout<<"\n memory allocated";
        *p = 12;
        cout<<"integer value stored:"<<*p;
        delete p;
        cout<<"\n Memory deallocated";
    }
    return 0;
}