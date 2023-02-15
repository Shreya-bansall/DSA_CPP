// Link: - https://leetcode.com/problems/power-of-two/
// Power of Two

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=15;

    for(int i=0;i<=30;i++){
        int ans = pow(2,i);

        if(ans==n){
            cout<<"true";
        }
    }
    cout<<"false";

    return 0;
}

// Other Approach

int main(){
    int n=16, count=0;

    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    
    if(count==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}