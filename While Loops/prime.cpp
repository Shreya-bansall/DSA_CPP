#include<iostream>
using namespace std;

int main(){
    int n,i=2;
    cin>>n;

    while(i<n){
        if((n%i)==0){
            cout<<"Not Prime";
        }
        else{
            cout<<"Prime";
        }
        i=i+1;
    }

    return 0;
}