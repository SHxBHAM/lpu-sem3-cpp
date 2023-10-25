#include<iostream>
using namespace std;
class Array(){
    private:
    int *arr;
    int n;
    public:
    Array();
    void show_data();
}
Array::Array(){
    cout<<"\n Enter size:";
    cin>>n;
    arr = new int[n];
    cout<<"\n Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i]
    }
}
void Array::show_data(){
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int no_object;
    cout<<"\n Enter no. of objects:";
    cin>>no_object;
    Array *ptr = new Array(no_object);
    for(int i=0;i<no_object;i++){
        ptr->
    }

}