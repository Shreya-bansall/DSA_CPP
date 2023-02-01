#include<iostream>
using namespace std;

int main(){

    cout<<"Size of int is: "<<sizeof(int);
    cout<<"\nSize of char is: "<<sizeof(char);
    cout<<"\nSize of bool is: "<<sizeof(bool);
    cout<<"\nSize of float is: "<<sizeof(float);
    cout<<"\nSize of double is: "<<sizeof(double);

    int a = 'b';
    char b = 56;
    cout<<"\n"<<a<<"\n"<<b;

    return 0;
}