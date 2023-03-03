// Link: - https://www.codingninjas.com/codestudio/problems/find-unique_625159
// Find unique

#include<iostream>
using namespace std;

int Unique(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=arr[i]^ans;
    }
    return ans;
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

    cout<<"Unique Element: "<<Unique(arr,size);

    return 0;
}