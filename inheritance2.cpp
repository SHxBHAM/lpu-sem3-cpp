#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void get_number(int a){
        roll_number = a;
    }
    void put_number(){
        cout<<"Roll No."<<roll_number<<"\n";

    }
};
class test:public student{
    protected:
    float part1,part2;
    public:
    void get_marks(float x,float y){
        part1 = x;
        part2 = y;
    }
}
void result::display(){
    total = part1+part2+score;
    put_number();
    put_marks();
    
}