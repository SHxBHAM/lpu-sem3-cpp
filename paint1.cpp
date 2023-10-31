#include<iostream>
using namespace std;
class Colour{
    public:
    virtual void paint(){
        cout << "i'm painting";
    };
};
class redpaint : public Colour{

}