#include<iostream>
using namespace std;

bool LinearSearch(int arr[][100], int target, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[100][100];
    int n, m, target;
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

    cout<<"Enter the element for search: ";
    cin>>target;

    if(LinearSearch(arr,target,n,m)){
        cout<<"Element Found";
    }
    else{
        cout<<"Not Found!";
    }

    return 0;
}