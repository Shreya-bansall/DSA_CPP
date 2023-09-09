// Link: - https://leetcode.com/problems/rotate-image/
// Rotate Image

#include<iostream>
using namespace std;

void RotateImage(int arr[][100], int n, int m){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        int start=0, end=n-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
}

int main(){
    int arr[100][100], n, m;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;

    cout<<"Enter the elements of 2D array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    RotateImage(arr,n,m);

    cout<<"After rotating the 2D array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}