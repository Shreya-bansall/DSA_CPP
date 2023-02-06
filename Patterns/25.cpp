// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<j;
            }
        }
        cout<<"\n";
    }

    return 0;
}