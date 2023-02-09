#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=101, ans=0, i=0;

    // left shift
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        n/=10;
        i++;
    }
    cout<<ans;

    return 0;
}