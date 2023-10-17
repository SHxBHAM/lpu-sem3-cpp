#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *p = NULL;
    p = new int;
    if(p == NULL){
        cout<<"\n Memory alloc failure";
        exit(1);
    }
    return 0;
}