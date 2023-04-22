// Link: - https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179
// Insertion Sort

#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    int i=1;
    while(i<n){
        int j=i-1;
        int temp=arr[i];
        while(j>=0){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        i++;
        arr[j+1]=temp;
    }
}

int main(){
    int n, arr[100];
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    InsertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}