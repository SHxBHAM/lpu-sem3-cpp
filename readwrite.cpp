#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char s[30];
    char n[30];
    ofstream of("result1.txt");
    of<<"welcome";
    cin>>n;
    of.close();
    cout<<"data saved\n";
    ifstream inf("result1.txt");
    inf>>s;
    inf>>n;
    cout<<s<<endl;
    cout<<n;
    inf.close();
    return 0;
}