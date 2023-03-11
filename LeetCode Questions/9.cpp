// Link: - https://leetcode.com/problems/find-pivot-index/
// Find Pivot Index

#include<iostream>
using namespace std;

int PivotIndex(int arr[], int n){
    int sum=0, sum1=0;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum-arr[i];
        if(sum==sum1){
            return i;
        }
        sum1=sum1+arr[i];
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements of an array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int index = PivotIndex(arr,size);
    cout<<"Pivot index is: "<<index;

    return 0;
}