// nCr

#include<iostream>
using namespace std;

int fact(int num){
    int ans=1;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    return ans;
}

int main(){
    int n, r, ans;
    cin>>n>>r;

    ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;

    return 0;
}