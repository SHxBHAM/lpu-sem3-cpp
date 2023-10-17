#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    float *p = NULL;
    float *q = NULL;
    float *r = NULL;
    float *s = NULL;
    p = new float;
    q = new float;
    r = new float;
    s = new float;
    if (p == NULL || q == NULL || r == NULL || s == NULL){
        cout<<"\n Memory allocation failure";
        exit(1);
    }
    cout<<"\n Enter principle, rate and time:";
    cin>>*p>>*q>>*r;
    *s = (0.01)*(*p)*(*q)*(*r);
    cout<<"simple interest is :"<<*s;
    delete p;
    delete q;
    delete r;
    delete s;
    return 0;

}