#include<iostream>
using namespace std;

void ColumnWiseSum(int arr[][100], int n, int m){
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}

int main(){
    int arr[100][100];
    int n, m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    ColumnWiseSum(arr,n,m);
    return 0;
}