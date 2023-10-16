#include<iostream>
#define MAXSIZE 5
using namespace std;
class Stack{
    char s[MAXSIZE];
int top;
public:
Stack(){
    top=-1;
}
void push(char);
int pop();
bool isFull();//true when full otherwise false...
bool isEmpty();//true when empty otherwise false...

};
void Stack::push(char x){
    if(top==MAXSIZE-1){
        cout<<"Stack overflow...!"<<endl;
    }
    else{
        top++;
        s[top]=x;
    }
}
int Stack::pop(){
    int t;
    if(top==-1){
        cout<<"Stack underflow...."<<endl;
    }
    else{
        t=s[top];
        top--;
    }
    return t;
}
int main(){
    Stack s;
    // cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.isFull()<<endl;
    for(int i=0; i<7; i++){
        s.push(i*i);
    }
    s.push(6);
    s.push(2);
    s.push(9);
    cout<<s.pop();
    s.push(7);
    cout<<s.pop();
    cout<<s.pop();

    return 0;
}
