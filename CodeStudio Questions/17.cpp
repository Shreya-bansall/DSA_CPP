// Link: - https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298
// Reverse the Array

#include<iostream>
using namespace std;

void ReverseArray(int arr[], int n, int m){
    int s=m+1, e=n-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    int n, arr[100], m;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the index after you want reverse: ";
    cin>>m;

    ReverseArray(arr,n,m);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}