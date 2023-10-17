#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int *arr;
    int size;
    cout<<"\n enter the size of integer array:";
    cin>>size;
    cout<<"\n creating an array of size"<<size;
    arr = new int[size];
    if(arr == NULL)
    {
        cout<<"\n Problem in memory allocation";
        exit(1);
    }
    else {
        cout<<"\n allocation of mem successful";
    }
}