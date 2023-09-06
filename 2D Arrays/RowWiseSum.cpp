#include<iostream>
using namespace std;

void RowWiseSum(int arr[][100], int n, int m){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
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

    RowWiseSum(arr,n,m);
    return 0;
}