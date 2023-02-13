#include<iostream>
using  namespace std;

int power(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter value of a(a^b): ";
    cin>>a;
    cout<<"Enter value of b(a^b): ";
    cin>>b;

    cout<<"a^b: "<<power(a,b);

    return 0;
}