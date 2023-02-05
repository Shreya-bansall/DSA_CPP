// A
// B C
// C D E
// D E F G

#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<(char)('A'+k-1);
            k++;
        }
        cout<<"\n";
    }

    return 0;
}