#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream myFile;
    ifstream file;
    char ch[40];
    char text;

    cout<<"ENter SoMe TexT HeRe :";
    cin.getline(ch,40);
    myFile.open("sampletext",ios::out);
    if(myFile){
        myFile<<ch;
        cout<<"Data stored successfully: \n\n"<<endl;
    }
    else cout <<"Error occured while opening file."<<endl;
    myFile.close();
    return 0;

}