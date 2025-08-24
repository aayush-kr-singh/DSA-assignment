#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element :";
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<n/2;i++){
        temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}