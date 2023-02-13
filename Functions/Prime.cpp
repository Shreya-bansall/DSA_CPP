#include<iostream>
using namespace std;

bool prime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;

    if(prime(n)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }

    return 0;
}