#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter row:";
    cin>>n;
    cout<< "enter column:";
    cin>>m;
    int arr[50][50];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            int temp = arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}