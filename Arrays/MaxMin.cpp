#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    return max;
}

int getMin(int arr[], int n){
    int min=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    return min;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter array elements: ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Maximum element in this array: "<<getMax(arr,size);
    cout<<"\nMinimum element in this array: "<<getMin(arr,size);

    return 0;
}