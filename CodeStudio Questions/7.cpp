// Link: - https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055
// Sort 0 1 2

#include<iostream>
using namespace std;

void PrintArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void Sort012(int arr[], int n){
    int i=0,j=(n-1),mid=0;
        while(mid<=j){
            if(arr[mid]==0){
                swap(arr[i],arr[mid]);
                i++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else if(arr[mid]==2){
                swap(arr[mid],arr[j]);
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
    cout<<"Enter elements of an array(0 & 1 & 2): ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    Sort012(arr,size);
}