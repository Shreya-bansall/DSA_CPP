// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<j;
            }
            else{
                cout<<"*";
            }
        }
        for(int j=n-i;j>=1;j--){
                cout<<"*";
        }
        for(int j=i;j>=1;j--){
                cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}