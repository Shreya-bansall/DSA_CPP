#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    // Copying list
    list<int> n(5,100);

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"After Erase: ";
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<"\nSize of list: "<<l.size();
    cout<<endl;

    for(int i:n){
        cout<<i<<" ";
    }
}