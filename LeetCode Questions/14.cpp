// Link: - https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// Check if Array Is Sorted and Rotated

#include<iostream>
using namespace std;

int CheckArray(int arr[], int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    return count;
}

int main(){
    int n, arr[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=CheckArray(arr,n);
    if(ans<=1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}