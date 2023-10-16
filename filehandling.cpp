#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    istream in("result.txt");
    in<<"hello";
    in.close();
    cout<<"data saved\n";
}