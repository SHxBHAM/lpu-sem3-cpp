#include<iostream>
using namespace std;
class s{
    int rollno;
    char name[10];
    int age ;
    s*next;
    public:
    s(){
        next = NULL;
    }
    void getdata(){
        cout<<"enter rollno, age , name"<<endl;
        cin>>rollno>>age>>name;
    }
    void links(s*t){
        next = t;
    }
    void print(){
        while(p!=NULL){
            cout<<"roll no."<<p->rollno<<endl<<"age is"<<p->age<<endl<<"name is"<<p->name<<endl;
        }
    }
}
int main(){
    s o1,o2,o3;
    o1.getdata;
    o2.getdata;
    o3.getdata;
    o1.links;
    o2.links;
    o1.print;
}