// Doubly ended queue
// Dynamic

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"\n";

    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"\nPrint 0th index element: "<<d.at(0);

    d.push_front(2);

    cout<<"\nFront: "<<d.front();
    cout<<"\nBack: "<<d.back();

     cout<<"\nEmpty or not: "<<d.empty();

     cout<<"\nBefore Erase: "<<d.size();
     d.erase(d.begin(),d.begin()+1);
     cout<<"\nAfter Erase: "<<d.size();
}