// Link: - https://www.codingninjas.com/codestudio/problems/3sum_893028
// 3Sum

#include<iostream>
using namespace std;

void SortArray(int arr[], int n){
    for(int i=0;i<n-1;i++) {
        for(int j=(i+1);j<n;j++) {
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void TripletSum(int arr[], int n, int Sum){

   SortArray(arr,n);
   for(int i=0;i<n-2;i++){
    int start = i+1;
    int end = n-1;
    while(start<end){
        if(arr[i]+arr[start]+arr[end]==Sum){
            cout<<arr[i]<<","<<arr[start]<<","<<arr[end]<<"\n";
				return;
			}
			else if(arr[i]+arr[start]+arr[end]<Sum)
				start++;
			else
				end--;
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
    int Sum;
    cout<<"Enter sum of elements: ";
    cin>>Sum;

    TripletSum(arr,size,Sum);
}