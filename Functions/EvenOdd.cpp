#include<iostream>
using namespace std;

bool evenodd(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    if(evenodd(num)){
        cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }

    return 0;
}