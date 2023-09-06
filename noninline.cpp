#include <iostream>
using namespace std;
int square(int s)
{
    return s*s;
}
int main(){
    int a ;
    cout<<"Enter number to compute its square:";
    cin>>a;
    cout<<"Square is:"<<square(a);
    return 0;
}