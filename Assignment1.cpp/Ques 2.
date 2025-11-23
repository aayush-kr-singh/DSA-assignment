#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element :"<<endl;
        cin>>arr[i];
    }
    cout<<"array before: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for (int k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
        }
    }
    cout<<"array after: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
