#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("shreya");
    s.push("bansal");
    s.push("UPES");

    cout<<"Top element: "<<s.top();

    s.pop();
    cout<<"\nTop element: "<<s.top();

    cout<<"\nSize of stack: "<<s.size();
    cout<<"\nEmpty or not: "<<s.empty();
}