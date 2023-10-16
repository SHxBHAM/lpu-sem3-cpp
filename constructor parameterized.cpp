#include<iostream>
using namespace std;
class Rectangle{
    int l , b;
    public:
    Rectangle(int x = 12,int y = 34){
        l = x;
        b = y;
    }
    int area(){
        return(l*b);
    }

};
int main(){
    Rectangle r ;
    cout<<"Area is"<<r.area();
    Rectangle r1(45,67);
    cout<<"\n Area is"<<r1.area();
}