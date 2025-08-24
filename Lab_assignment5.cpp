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
        int c=0;
        for(int j=0;j<m;j++){
            c=c+arr[i][j];
        }
        cout<<"sum of column "<<i<<" is "<<c<<endl;
    }
    for(int i=0;i<n;i++){
        int row=0;
        for(int j=0;j<m;j++){
            row=row+arr[j][i];
        }
        cout<<"sum of row "<<i<<" is "<<row<<endl;
    }    
}