#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=-6, i=0,ans=0;
    n=n+(-2*n); // Convert into positive number
    
    // Convert into Binary
    while(n!=0){
        int bit=n&1;
        ans = (bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }

    // Take 1's compliment
    ans=~ans;
    // Take 2's Compliment 
    ans=ans+1;
    cout<<ans;

    return 0;
}
