// AP = a + (n-1)*d

#include<iostream>
using namespace std;

int AP(int a, int n, int d){
    int ans = a+(n-1)*d;
    return ans;
}

int main(){
    int a, n, d;
    cout<<"Enter first term: ";
    cin>>a;
    cout<<"Enter nth term: ";
    cin>>n;
    cout<<"Enter common difference: ";
    cin>>d;

    cout<<"Nth term is: "<<AP(a,n,d);

    return 0;
}