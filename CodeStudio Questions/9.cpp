// Link: - https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554
// Search in a rotated array.

#include<iostream>
using namespace std;

int Pivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int BinarySearch(int arr[], int s, int e, int key){
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            return mid;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int SearchRotated(int arr[], int n, int key){
    int pivot=Pivot(arr,n);
    if(key>=arr[pivot] && key<=arr[n-1]){
        return BinarySearch(arr,pivot,n-1,key);
    }
    else{
        return BinarySearch(arr,0,pivot-1,key);
    }
}

int main(){
    int size, key;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements of an array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    cin>>key;

    int ans=SearchRotated(arr,size,key);
    cout<<ans;

    return 0;
}