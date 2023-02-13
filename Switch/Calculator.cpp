#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter operation(/,*,+,-,%): ";
    cin>>op;

    switch(op){
        case '/':
        cout<<"a/b: "<<a/b;
        break;

        case '*':
        cout<<"a*b: "<<a*b;
        break;

        case '+':
        cout<<"a+b: "<<a+b;
        break;

        case '-':
        cout<<"a-b: "<<a-b;
        break;

        case '%':
        cout<<"a%b: "<<a%b;
        break;

        default:
        cout<<"Entered wrong operation";
        break;
    }

    return 0;
}