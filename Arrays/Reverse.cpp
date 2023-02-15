#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start,end;
    start=0;
    end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout<<"Reverse of an array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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

    reverse(arr,size);

    return 0;
}