// Link: - https://www.codingninjas.com/codestudio/problems/sort-0-1_624379
// Sort 0 1

#include<iostream>
using namespace std;

void PrintArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void Sort01(int arr[], int n){
    int i=0,j=(n-1);
        while(i<j){
            if(arr[i]==0 && i<j){
                i++;
            }
            else if(arr[j]==1 && i<j){
                j--;
            }
            else if(arr[i]==1 && arr[j]==0 && i<j){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        PrintArray(arr,n);
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements of an array(0 & 1): ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    Sort01(arr,size);
}