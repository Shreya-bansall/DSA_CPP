//       1
//     2 3
//   4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;

int main(){
    int n=4,count=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<count;
                count++;
            }
        }
        cout<<"\n";
    }

    return 0;
}