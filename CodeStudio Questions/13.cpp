// Link: - https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559
// Aggressive Cows

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

int main(){

    return 0;
}