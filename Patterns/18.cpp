// D
// C D
// B C D
// A B C D

#include<iostream>
using namespace std;



int main(){
    char n=4;

    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            cout<<(char)('A'+n-j-1);
        }
        cout<<"\n";
    }

    return 0;
}