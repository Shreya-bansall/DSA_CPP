// Link: - https://leetcode.com/problems/merge-sorted-array/
// Merge Sorted Array

#include<iostream>
using namespace std;

void Merge(int n, int arr1[], int m, int arr2[], int arr3[]){
    int i=0, j=0, k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }

    while(i<n){
        arr3[k++]=arr1[i++];
    }

    while(j<m){
        arr3[k++]=arr2[j++];
    }
}

void print(int ans[], int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n,m,arr1[100],arr2[100];
    cout<<"Size of first array: ";
    cin>>n;
    cout<<"Size of second array: ";
    cin>>m;

    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int arr3[7]={0};

    Merge(n,arr1,m,arr2,arr3);

    cout<<"Merged Sorted Array: ";
    print(arr3,7);

    return 0;
}