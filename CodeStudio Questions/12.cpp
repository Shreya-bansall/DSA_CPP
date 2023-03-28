// Link: - https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557
// Painter's Partition Problem

#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int StudentCount=1;
    int BoardSum=0;
    for(int i=0;i<n;i++){
        if(BoardSum+arr[i]<=mid){
            BoardSum+=arr[i];
        }
        else{
            StudentCount++;
            if(StudentCount>k || arr[i]>mid){
                return false;
            }
            BoardSum=arr[i];
        }
    }
    return true;
}

int main(){
    int s=0, sum=0, e, ans=-1, arr[500], n, k;
    cout<<"Enter the length of an array: ";
    cin>>n;
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number of painters: ";
    cin>>k;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    e=sum;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;

    return 0;
}