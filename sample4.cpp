#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream fp;
    fp.open("output.txt",ios::out);
    if(fp){
        fp<<"shubhxm"<<endl;
        fp<<"edits"<<endl;
        fp<<"stuff"<<endl;
        fp<<"that's real good"<<endl;

    }
    else cout<<"error while opening file."<<endl;
    return 0;
}