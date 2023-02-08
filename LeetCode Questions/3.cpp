// Link: - https://leetcode.com/problems/reverse-integer/
// Reverse Integer

#include<iostream>
using namespace std;

int main(){
    int n=123, ans=0;

    while(n!=0){
        int lastDigit = n%10;
        int ans = ans*10+lastDigit;
        n/=10;
    }

    // Store under 32-bit range
    // if(ans>INT_MAX || ans<INT_MIN){
    //     return 0;
    // }

    cout<<ans;

    return 0;
}