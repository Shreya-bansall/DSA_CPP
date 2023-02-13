#include<iostream>
using namespace std;

int CountBits(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}

int main(){
    int a, b;
    cin>>a>>b;
    int ans = CountBits(a) + CountBits(b);
    cout<<"Total number of bits: "<<ans;

    return 0;
}