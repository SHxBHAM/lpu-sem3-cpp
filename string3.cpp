#include<iostream>
#include <string>
using namespace std;

int main(){
    string str1("Lovely Professional University");
    string str2("ve");
    cout<<str1<<endl;
    int x = str1.find(str2);
    cout<<x<<endl;
    return 0;

}