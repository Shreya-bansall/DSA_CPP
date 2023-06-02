#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("shreya");
    q.push("bansal");
    q.push("UPES");

    cout<<"First Element: "<<q.front();
    q.pop();
    cout<<"\nFirst Element: "<<q.front();
    cout<<"\nSize after pop: "<<q.size();
}