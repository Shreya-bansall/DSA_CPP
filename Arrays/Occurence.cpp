#include<iostream>
using namespace std;

void Occurence(int arr[], int n){
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi= max(maxi,arr[i]);
    }

    int freq[maxi+1]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    // Printing
    for(int i=0;i<(maxi+1);i++){
        if(freq[i]!=0){
            cout<<i<<" -> "<<freq[i]<<"\n";
        }
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

    Occurence(arr,size);

    return 0;
}