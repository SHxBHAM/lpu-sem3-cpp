#include<iostream>
using namespace std;
int main(){
    char r;
    cout<<"please enter your choice: ";
    cin>>r;
    if(r == 'R'||r == 'r'){
        cout<<"I'm Painting with Red Color.";
    }
    else if(r == 'B'||r == 'b'){
        cout<<"I'm Painting with Blue Color";
    }
    else{
        cout<<"Invalid choice";
    }
    return 0;
}