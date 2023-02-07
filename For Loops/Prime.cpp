#include<iostream>
using namespace std;

int main(){
    int n=5;
    bool a=1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            a=0;
            break;
        }
    }

    if(a==1){
        cout<<"Prime";
    }
    else{
        cout<<"Not prime";
    }

    return 0;
}