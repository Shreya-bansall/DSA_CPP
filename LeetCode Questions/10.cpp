// Link: - https://leetcode.com/problems/sqrtx/submissions/922956598/
// Sqrt(x)

#include<iostream>
using namespace std;

int Sqrt(int n){
    int s=0, ans;
    int e=n;
    int mid=s+(e-s)/2;

    // mid<N/mid

    while(s<e){
        if(mid*mid>n){
            e=mid-1;
        }
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            return mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int ans=Sqrt(n);
    cout<<ans;
}