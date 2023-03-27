// Link: - https://www.codingninjas.com/codestudio/problems/allocate-books_1090540
// Allocate Books

#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int StudentCount=1;
    int Pagesum=0;
    for(int i=0;i<n;i++){
        if(Pagesum+arr[i]<=mid){
            Pagesum+=arr[i];
        }
        else{
            StudentCount++;
            if(StudentCount>m || arr[i]>mid){
                return false;
            }
            Pagesum=arr[i];
        }
    }
    return true;
}

int main(){
    int n, m, arr[100];
    cout<<"Enter number of books: ";
    cin>>n;
    cout<<"Enter number of students: ";
    cin>>m;
    cout<<"Enter count of book pages in an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    int s=0, sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum, ans=-1, mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
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