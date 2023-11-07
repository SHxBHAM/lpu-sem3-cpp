#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int a[],int low, int high)
{

    int pivot = a[low];
    int i = low;
    int j = high+1;
    while(i<j)
    {
        do
        {
            i++;
        } while (a[i]<pivot);
        do
        {
            j--;
        } while (a[j]>pivot);
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[low], a[j]);
    return j;
}
int main(){
    int n;
    cout<<"enter range of array: ";
    cin>>n;
    int a[n];
    for(int i=0;i++;i<n-1){
        cin<<a[i];
    }
}