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

bool isPossible(int arr[], int n, int k, int mid){
    int CowCount=1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastpos>=mid){
            CowCount++;
            if(CowCount==k){
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false;
}

int main(){
    int s=0, e, ans=-1, arr[500], n, k, maxi=INT_MIN;
    cout<<"Enter the length of an array: ";
    cin>>n;
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    SortArray(arr,n);
    cout<<"Enter number of cows: ";
    cin>>k;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    e=maxi;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;

    return 0;
}