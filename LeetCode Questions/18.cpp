// Link: - https://leetcode.com/problems/search-a-2d-matrix/
// Search a 2D Matrix

#include<iostream>
using namespace std;

int Search(int arr[][100], int n, int m, int target){
    int s=0;
    int e=n*m-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int element=arr[mid/m][mid%m];
        if(element==target){
            return 1;
        }
        else if(element<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}

// int Search(int arr[][100], int n, int m, int target){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

int  main(){
    int arr[100][100], n, m;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;

    cout<<"Enter the elemnets of 2D array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"Enter the element search for: ";
    cin>>target;

    if(Search(arr,n,m,target)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}