#include<iostream>
using namespace std;
class engine
{  
    public:
    engine(){
        
        cout<<"I am engine"<<endl;
    }
    ~engine(){
        
        cout<<"engine destroyed"<<endl;
    }
    
};
class car{
   
    public:
    engine eng;
    car(){
        
        cout<<"this is car"<<endl;
        
    }
    ~car(){
        cout<<"car destroyed"<<endl;
    }
    
};

int main(){
    car c;
    return 0;
}