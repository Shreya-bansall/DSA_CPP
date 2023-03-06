// Link: - https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397
// Duplicate In Array

#include<iostream>
using namespace std;

void Duplicate(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=arr[i]^ans;
    }
    for(int i=1;i<n;i++){
        ans=i^ans;
    }

    cout<<ans;
} 

int main(){
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;
    int arr[100];

    cout<<"Enter elements of an array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    Duplicate(arr,size);

    return 0;
}