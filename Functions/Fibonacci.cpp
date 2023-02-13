#include<iostream>
using namespace std;

int Fibonacci(int n){
    int a=0, b=1, sum=0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<"Nth term is: "<<Fibonacci(n);
}