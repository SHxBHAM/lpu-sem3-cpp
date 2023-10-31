#include<iostream>
using namespace std;
class operators{
    int a ;
    int b;
    public:
    void addition(a,b){
    int c;
    c = a+b;
    cout<<"the answer is :"<<c;

}
void substraction(a,b){
    int c;
    c = a-b;
    cout<<"the answer is :"<<c;

}
void multiplication(a,b){
    int c;
    c = a*b;
    cout<<"the answer is :"<<c;

}
void divion(a,b){
    int c;
    c = a/b;
    cout<<"the answer is :"<<c;

}
}

int main(){
    operators a,b;
    cout<<"please enter 2 operands"<<endl;
    cin<<a<<b;
    char operator;
    cout<<"please enter the operation to be performed"<<endl;
    if(operator == '+'){
        addition(a,b);
    }
    else if(operator == '*'){
        multiplication(a,b);
    }
    else if(operator == '-'){
        substraction(a,b);
    }
    else if(operator == '/'){
        division(a,b);
    }
    return 0;
}