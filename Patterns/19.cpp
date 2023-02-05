// A B C
// B C D
// C D E

#include<iostream>
using namespace std;

int main(){
    int n=3;

    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=n;j++){
            cout<<(char)('A'+k-1);
            k++;
        }
        cout<<"\n";
    }

    return 0;
}