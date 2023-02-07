#include<iostream>
using namespace std;

int main(){
    int n=8;
    int first=0, second=1, sum=0;
    cout<<first<<" "<<second<<" ";

    for(int i=1;i<=n;i++){
        sum=first+second;
        first=second;
        second=sum;
        cout<<sum<<" ";
    }

    return 0;
}