// Store unique element
// No modification

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(auto i:s){
        cout<<i<<endl;
    }

    set<int>::iterator it=s.begin();
    it++;

    s.erase(s.begin());

    cout<<"\n";
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<"\n";

    cout<<s.count(5)<<endl;
    cout<<"\n";

    set<int>::iterator itr=s.find(5);
    cout<<*it;

    cout<<"\n";
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
}