// Link: - https://leetcode.com/problems/spiral-matrix/
// Spiral Matrix

#include<iostream>
using namespace std;

void Spiral(int arr[][100], int n, int m){
    int total=n*m;
    int count=0;

    int startingrow=0;
    int startingcol=0;
    int endingrow=n-1;
    int endingcol=m-1;

    while(count<total){
        for(int index=startingcol;count<total && index<=endingcol;index++){
            cout<<arr[startingrow][index]<<" ";
            count++;
        }
        startingrow++;

        for(int index=startingrow;count<total && index<=endingcol;index++){
            cout<<arr[index][endingcol]<<" ";
            count++;
        }
        endingcol--;

        for(int index=endingcol;count<total && index>=startingcol;index--){
            cout<<arr[endingrow][index]<<" ";
            count++;
        }
        endingrow--;

        for(int index=endingrow;count<total && index>=startingrow;index--){
            cout<<arr[index][startingcol]<<" ";
            count++;
        }
        startingcol++;
    }
}

int main(){
    int arr[100][100], n, m;
    cout<<"Enter number of rows: ";
    cin>>n;

    cout<<"Enter number of columns: ";
    cin>>m;

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    Spiral(arr,n,m);

    return 0;
}