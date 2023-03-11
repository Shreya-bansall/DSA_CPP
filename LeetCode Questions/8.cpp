// Link: - https://leetcode.com/problems/peak-index-in-a-mountain-array/
// Peak Index in a Mountain Array

#include<iostream>
using namespace std;

int MountainArray(int arr[], int n){
    int s = 0;
    int e = (n-1);
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
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

    int index = MountainArray(arr,size);
    cout<<"Peak index is: "<<index;

    return 0;
}