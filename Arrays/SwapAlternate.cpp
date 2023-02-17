#include<iostream>
using namespace std;

void SwapAlternate(int arr[], int n){

    for(int i=0;i<n;i+=2){
        if((i+1)<n){
            swap(arr[i],arr[i+1]);
            // Swap Alternate
            // {
                // temp=arr[1];
                // arr[1]=arr[0];
                // arr[0]=temp;
            // }
        }
    }

    cout<<"After Swapping Alternate: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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

    SwapAlternate(arr,size);

    return 0;
}