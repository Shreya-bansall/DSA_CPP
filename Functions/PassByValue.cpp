#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"n is: "<<n<<"\n";
}

int main(){
    int n;
    cin>>n;

    dummy(n);

    cout<<"number n is: "<<n;

    return 0;
}