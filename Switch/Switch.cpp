#include<iostream>
using namespace std;

int main(){
    int n=2;

    switch(n){
        case 1:
        cout<<"First";
        break;

        case 2:
        cout<<"Second";
        break;

        default:
        cout<<"It is a default case";
        break;
    }

    return 0;
}