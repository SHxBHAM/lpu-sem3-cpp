#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1("12345");
    string s2("abcde");
    cout<<s1<<endl;

    s1.erase(4,5);
    cout<<s1<<endl;
    s2.replace(1,3,s1);
    cout<<s2<<endl;
    return 0;

}