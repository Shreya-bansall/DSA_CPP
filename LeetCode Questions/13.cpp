// Link: - https://leetcode.com/problems/rotate-array/
// Rotate Array

#include<iostream>
using namespace std;

void RotateArray(int arr[], int n, int temp[], int k){
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
}

void print(int temp[], int n){
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}

int main(){
    int n,arr[100],temp[100],k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value that will be rotated the array by: ";
    cin>>k;

    RotateArray(arr,n,temp,k);
    print(temp,n);

    return 0;
}