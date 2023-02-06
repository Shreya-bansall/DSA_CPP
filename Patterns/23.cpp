// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<i;
        }
        cout<<"\n";
    }

    return 0;
}