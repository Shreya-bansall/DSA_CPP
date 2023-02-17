#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){

    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"At position "<<i;
            return 1;
        }
    }
    return 0;
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

    int key;
    cout<<"Enter the element search for: ";
    cin>>key;

    bool ans = search(arr,size,key);

    if(ans){
        cout<<" Key is present";
    }
    else{
        cout<<"Key is absent";
    }

    return 0;
}