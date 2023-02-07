// Link: - https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Subtract the Product and Sum of Digits of an Integer

#include<iostream>
using namespace std;

int main(){
    int n=234;
    int product=1, sum=0;

    while(n>0){
        product*=(n%10);
        sum+=(n%10);
        n/=10;
    }
    int ans = product-sum;
    cout<<ans;

    return 0;
}