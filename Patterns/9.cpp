// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        cout<<"\n";
    }

    return 0;
}