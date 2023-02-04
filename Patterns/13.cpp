// A B C
// D E F
// G H I

#include<iostream>
using namespace std;

int main(){
    int n=3,count=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)('A'+count-1);
            count++;
        }
        cout<<"\n";
    }

    return 0;
}