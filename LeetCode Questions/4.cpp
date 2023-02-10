// Link: - https://leetcode.com/problems/complement-of-base-10-integer/
// Complement of Base 10 Integer

#include<iostream>
using namespace std;

int main(){
    int n=5, mask=0;
    int m=n;

    if(n==0){
        cout<<"1";
    }

    while(m!=0){
        mask = (mask<<1) | 1;
        m= m>>1;
    }

    int ans = (~n) & mask;
    cout<<ans;

    return ans;
}