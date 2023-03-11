#include<iostream>
using namespace std;

int FirstElement(int arr[], int n, int key){
    int s=0, e=(n-1), mid=s+(e-s)/2, ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int SecondElement(int arr[], int n, int key){
    int s=0, e=(n-1), mid=s+(e-s)/2, ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
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

    int key;
    cout<<"Enter key: ";
    cin>>key;

    int a=FirstElement(arr,size,key);
    int b=SecondElement(arr,size,key);
    cout<<"Total number of occurence of "<<key<<" is: ";
    cout<<(b-a)+1;
}