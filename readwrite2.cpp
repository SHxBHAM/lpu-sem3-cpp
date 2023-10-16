#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("result.txt");
    fout<<"india\n";
    fout<<"USA\n";
    fout<<"UK\n";
    fout.close();
    fout.open("result.txt");
    fout<<"Delhi\n";
    fout<<"Washington\n";
    fout<<"London\n";
}