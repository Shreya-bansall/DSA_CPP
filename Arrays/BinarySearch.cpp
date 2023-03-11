#include<iostream>
using namespace std;

int Binarysearch(int arr[], int n, int key){
    int start = 0;
    int end = (n-1);
    int mid = (start+end)/2;
    // mid = start + (end-start)/2

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = (start+end)/2;
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
    
    int key;
    cout<<"Enter key: ";
    cin>>key;

    int index = Binarysearch(arr,size,key);
    cout<<key<<" is present at "<<index;

    return 0;
}