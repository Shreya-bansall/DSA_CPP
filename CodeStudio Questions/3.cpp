// Link: - https://www.codingninjas.com/codestudio/problems/intersection-of-two-sorted-arrays_1082149
// Intersection Of Two Sorted Arrays

#include<iostream>
using namespace std;

int main(){
    int size, size1;
    cout<<"Enter size of first array: ";
    cin>>size;
    int arr[100],arr1[100];
    cout<<"Enter elements of first array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Enter size of second array: ";
    cin>>size1;
    cout<<"Enter elements of second array: ";
    for(int j=0;j<size1;j++){
        cin>>arr1[j];
    }

    // Intersection
    
    cout<<"Intersection of two arrays: ";
    // int element;
    // for(int i=0;i<size;i++){
    //     element=arr[i];
    //     for(int j=0;j<size1;j++){
    //         if(element==arr1[j]){
    //             cout<<element<<"\n";
    //             arr1[j]=INT_MIN;
    //             break;
    //         }
    //     }
    // }

    // Optimal Soultion
    int i=0,j=0;
    while(i<size && j<size1){
        if(arr[i]==arr1[j]){
            cout<<arr1[j];
            i++;
            j++;
        }
        else if(arr[i]<arr1[j]){
            i++;
        }
        else{
            j++;
        }
    }

    return 0;
}