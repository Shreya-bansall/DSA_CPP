// Link: - https://www.codingninjas.com/studio/problems/print-like-a-wave_893268
// Print Like a Wave

#include<iostream>
using namespace std;

void Wave(int arr[][100], int n, int m){
    
    for(int col=0;col<m;col++){
        if(col&1){
            // Odd Index
            for(int row=n-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row=0;row<n;row++){
                cout<<arr[row][col]<<" ";
            }
        }
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

    Wave(arr,n,m);
    return 0;
}